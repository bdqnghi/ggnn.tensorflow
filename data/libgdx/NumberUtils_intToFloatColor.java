public static float intToFloatColor(int value) {
    // This unfortunately means we don't get the full range of alpha.
    return Numbers.intBitsToFloat(value & 0xfeffffff);
}
