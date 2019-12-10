public static float[][] generateWhiteNoise(int width, int height) {
    float[][] noise = new float[width][height];
    for (int y = 0; y < height; y++) {
        for (int x = 0; x < width; x++) {
            noise[x][y] = MathUtils.random();
        }
    }
    return noise;
}
