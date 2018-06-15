Require Import Coq.Classes.Morphisms.
Require Import Coq.Lists.List.

Lemma fold_left_orb_true ls
  : List.fold_left orb ls true = true.
Proof. induction ls as [|?? IHls]; [ reflexivity | assumption ]. Qed.
Lemma fold_left_orb_pull ls v
  : List.fold_left orb ls v = orb v (List.fold_left orb ls false).
Proof. destruct v; [ apply fold_left_orb_true | reflexivity ]. Qed.

Fixpoint fold_andb_map {A B} (f : A -> B -> bool) (ls1 : list A) (ls2 : list B)
  : bool
  := match ls1, ls2 with
     | nil, nil => true
     | nil, _ => false
     | cons x xs, cons y ys => andb (f x y) (@fold_andb_map A B f xs ys)
     | cons _ _, _ => false
     end.
Lemma fold_andb_map_map {A B C} f g ls1 ls2
  : @fold_andb_map A B f ls1 (@List.map C _ g ls2)
    = fold_andb_map (fun a b => f a (g b)) ls1 ls2.
Proof. revert ls1 ls2; induction ls1, ls2; cbn; congruence. Qed.

Lemma fold_andb_map_map1 {A B C} f g ls1 ls2
  : @fold_andb_map A B f (@List.map C _ g ls1) ls2
    = fold_andb_map (fun a b => f (g a) b) ls1 ls2.
Proof. revert ls1 ls2; induction ls1, ls2; cbn; congruence. Qed.

Lemma fold_andb_map_length A B f ls1 ls2
      (H : @fold_andb_map A B f ls1 ls2 = true)
  : length ls1 = length ls2.
Proof.
  revert ls1 ls2 H; induction ls1, ls2; cbn; intros;
    rewrite ?Bool.andb_true_iff in *;
    f_equal; try congruence; intuition auto.
Qed.

Global Instance fold_andb_map_Proper {A B}
  : Proper (pointwise_relation _ (pointwise_relation _ eq) ==> eq ==> eq ==> eq) (@fold_andb_map A B).
Proof.
  unfold pointwise_relation.
  intros f g H ls1 y ? ls2 z ?; subst y z.
  revert ls2; induction ls1, ls2; cbn; try reflexivity.
  apply f_equal2; eauto.
Qed.
