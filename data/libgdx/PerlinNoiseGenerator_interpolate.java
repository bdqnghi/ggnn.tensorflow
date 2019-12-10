public static float interpolate(float x0, float x1, float alpha) {
    return x0 * (1 - alpha) + alpha * x1;
}
