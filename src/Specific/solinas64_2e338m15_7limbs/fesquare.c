static void fesquare(uint64_t out[7], const uint64_t in1[7]) {
  { const uint64_t x11 = in1[6];
  { const uint64_t x12 = in1[5];
  { const uint64_t x10 = in1[4];
  { const uint64_t x8 = in1[3];
  { const uint64_t x6 = in1[2];
  { const uint64_t x4 = in1[1];
  { const uint64_t x2 = in1[0];
  { uint128_t x13 = (((uint128_t)x2 * x11) + ((0x2 * ((uint128_t)x4 * x12)) + ((0x2 * ((uint128_t)x6 * x10)) + (((uint128_t)x8 * x8) + ((0x2 * ((uint128_t)x10 * x6)) + ((0x2 * ((uint128_t)x12 * x4)) + ((uint128_t)x11 * x2)))))));
  { uint128_t x14 = ((((uint128_t)x2 * x12) + ((0x2 * ((uint128_t)x4 * x10)) + (((uint128_t)x6 * x8) + (((uint128_t)x8 * x6) + ((0x2 * ((uint128_t)x10 * x4)) + ((uint128_t)x12 * x2)))))) + (0xf * ((uint128_t)x11 * x11)));
  { uint128_t x15 = ((((uint128_t)x2 * x10) + (((uint128_t)x4 * x8) + (((uint128_t)x6 * x6) + (((uint128_t)x8 * x4) + ((uint128_t)x10 * x2))))) + (0xf * (((uint128_t)x12 * x11) + ((uint128_t)x11 * x12))));
  { uint128_t x16 = ((((uint128_t)x2 * x8) + ((0x2 * ((uint128_t)x4 * x6)) + ((0x2 * ((uint128_t)x6 * x4)) + ((uint128_t)x8 * x2)))) + (0xf * ((0x2 * ((uint128_t)x10 * x11)) + ((0x2 * ((uint128_t)x12 * x12)) + (0x2 * ((uint128_t)x11 * x10))))));
  { uint128_t x17 = ((((uint128_t)x2 * x6) + ((0x2 * ((uint128_t)x4 * x4)) + ((uint128_t)x6 * x2))) + (0xf * (((uint128_t)x8 * x11) + ((0x2 * ((uint128_t)x10 * x12)) + ((0x2 * ((uint128_t)x12 * x10)) + ((uint128_t)x11 * x8))))));
  { uint128_t x18 = ((((uint128_t)x2 * x4) + ((uint128_t)x4 * x2)) + (0xf * (((uint128_t)x6 * x11) + (((uint128_t)x8 * x12) + ((0x2 * ((uint128_t)x10 * x10)) + (((uint128_t)x12 * x8) + ((uint128_t)x11 * x6)))))));
  { uint128_t x19 = (((uint128_t)x2 * x2) + (0xf * ((0x2 * ((uint128_t)x4 * x11)) + ((0x2 * ((uint128_t)x6 * x12)) + ((0x2 * ((uint128_t)x8 * x10)) + ((0x2 * ((uint128_t)x10 * x8)) + ((0x2 * ((uint128_t)x12 * x6)) + (0x2 * ((uint128_t)x11 * x4)))))))));
  { uint64_t x20 = (uint64_t) (x19 >> 0x31);
  { uint64_t x21 = ((uint64_t)x19 & 0x1ffffffffffff);
  { uint128_t x22 = (x20 + x18);
  { uint64_t x23 = (uint64_t) (x22 >> 0x30);
  { uint64_t x24 = ((uint64_t)x22 & 0xffffffffffff);
  { uint128_t x25 = (x23 + x17);
  { uint64_t x26 = (uint64_t) (x25 >> 0x30);
  { uint64_t x27 = ((uint64_t)x25 & 0xffffffffffff);
  { uint128_t x28 = (x26 + x16);
  { uint64_t x29 = (uint64_t) (x28 >> 0x31);
  { uint64_t x30 = ((uint64_t)x28 & 0x1ffffffffffff);
  { uint128_t x31 = (x29 + x15);
  { uint64_t x32 = (uint64_t) (x31 >> 0x30);
  { uint64_t x33 = ((uint64_t)x31 & 0xffffffffffff);
  { uint128_t x34 = (x32 + x14);
  { uint64_t x35 = (uint64_t) (x34 >> 0x30);
  { uint64_t x36 = ((uint64_t)x34 & 0xffffffffffff);
  { uint128_t x37 = (x35 + x13);
  { uint64_t x38 = (uint64_t) (x37 >> 0x30);
  { uint64_t x39 = ((uint64_t)x37 & 0xffffffffffff);
  { uint64_t x40 = (x21 + (0xf * x38));
  { uint64_t x41 = (x40 >> 0x31);
  { uint64_t x42 = (x40 & 0x1ffffffffffff);
  { uint64_t x43 = (x41 + x24);
  { uint64_t x44 = (x43 >> 0x30);
  { uint64_t x45 = (x43 & 0xffffffffffff);
  out[0] = x42;
  out[1] = x45;
  out[2] = (x44 + x27);
  out[3] = x30;
  out[4] = x33;
  out[5] = x36;
  out[6] = x39;
  }}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}
}