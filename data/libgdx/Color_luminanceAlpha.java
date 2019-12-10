public static int luminanceAlpha(float luminance, float alpha) {
    return ((int) (luminance * 255.0f) << 8) | (int) (alpha * 255);
}
