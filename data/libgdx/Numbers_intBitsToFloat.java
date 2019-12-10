public static final float intBitsToFloat(int i) {
    // wba.set(0, (byte) (i >> 24));
    // wba.set(1, (byte) (i >> 16));
    // wba.set(2, (byte) (i >> 8));
    // wba.set(3, (byte) (i));
    wia.set(0, i);
    return wfa.get(0);
// 
// 
// int exponent = (i >>> 23) & 255;
// int significand = i & 0x007fffff;
// float result;
// if (exponent == 0) {
// result = (float) (Math.exp((-126 - 23) * LN2) * significand);
// } else if (exponent == 255) {
// result = significand == 0 ? Float.POSITIVE_INFINITY : Float.NaN;
// } else {
// result = (float) (Math.exp((exponent - 127 - 23) * LN2) * (0x00800000 | significand));
// }
// 
// return (i & 0x80000000) == 0 ? result : -result;
}
