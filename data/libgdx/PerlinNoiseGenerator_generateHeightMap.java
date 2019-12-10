public static byte[] generateHeightMap(int width, int height, int min, int max, int octaveCount) {
    float[][] baseNoise = generateWhiteNoise(width, height);
    float[][] noise = generatePerlinNoise(baseNoise, octaveCount);
    byte[] bytes = new byte[baseNoise.length * baseNoise[0].length];
    int idx = 0;
    int range = max - min;
    for (int y = 0; y < height; y++) {
        for (int x = 0; x < width; x++) {
            bytes[idx++] = (byte) (noise[x][y] * range + min);
        }
    }
    return bytes;
}
