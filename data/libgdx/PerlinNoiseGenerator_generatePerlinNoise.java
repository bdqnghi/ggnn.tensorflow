public static float[][] generatePerlinNoise(int width, int height, int octaveCount) {
    float[][] baseNoise = generateWhiteNoise(width, height);
    return generatePerlinNoise(baseNoise, octaveCount);
}
