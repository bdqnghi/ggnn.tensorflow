public static int rgb888(Color color) {
    return ((int) (color.r * 255) << 16) | ((int) (color.g * 255) << 8) | (int) (color.b * 255);
}
