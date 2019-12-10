public static final int floatToIntBits(float f) {
    wfa.set(0, f);
    return wia.get(0);
// if (Float.isNaN(f)) {
// return 0x7f800001;
// }
// int signBit;
// if (f == 0) {
// return (1/f == Float.NEGATIVE_INFINITY) ? 0x80000000 : 0;
// } else if (f < 0) {
// f = -f;
// signBit = 0x80000000;
// } else {
// signBit = 0;
// }
// if (f == Float.POSITIVE_INFINITY) {
// return signBit | 0x7f800000;
// }
// 
// int exponent = (int) (Math.log(f) / LN2);
// if (exponent < -126) {
// exponent = -126;
// }
// int significand = (int) (0.5 + f * Math.exp(-(exponent - 23) * LN2));
// 
// // Handle exponent rounding issues & denorm
// if ((significand & 0x01000000) != 0) {
// significand >>= 1;
// exponent++;
// } else if ((significand & 0x00800000) == 0) {
// if (exponent == -126) {
// return signBit | significand;
// } else {
// significand <<= 1;
// exponent--;
// }
// }
// 
// return signBit | ((exponent + 127) << 23) | (significand & 0x007fffff);
}
