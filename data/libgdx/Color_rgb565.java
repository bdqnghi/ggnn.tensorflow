public static int rgb565(Color color) {
    return ((int) (color.r * 31) << 11) | ((int) (color.g * 63) << 5) | (int) (color.b * 31);
}
