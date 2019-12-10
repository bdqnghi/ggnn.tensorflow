public static int rgba4444(Color color) {
    return ((int) (color.r * 15) << 12) | ((int) (color.g * 15) << 8) | ((int) (color.b * 15) << 4) | (int) (color.a * 15);
}
