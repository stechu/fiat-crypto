Require Import Crypto.Specific.Framework.SynthesisFramework.
Require Import Crypto.Specific.solinas32_2e384m317.CurveParameters.

Module P <: PrePackage.
  Definition package : Tag.Context.
  Proof. make_Synthesis_package curve extra_prove_mul_eq extra_prove_square_eq. Defined.
End P.

Module Export S := PackageSynthesis P.