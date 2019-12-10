public static int argb8888(Color color) {
    return ((int) (color.a * 255) << 24) | ((int) (color.r * 255) << 16) | ((int) (color.g * 255) << 8) | (int) (color.b * 255);
}
