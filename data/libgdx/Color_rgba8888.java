public static int rgba8888(Color color) {
    return ((int) (color.r * 255) << 24) | ((int) (color.g * 255) << 16) | ((int) (color.b * 255) << 8) | (int) (color.a * 255);
}
