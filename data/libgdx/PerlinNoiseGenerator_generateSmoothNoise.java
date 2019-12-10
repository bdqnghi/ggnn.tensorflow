public static float[][] generateSmoothNoise(float[][] baseNoise, int octave) {
    int width = baseNoise.length;
    int height = baseNoise[0].length;
    float[][] smoothNoise = new float[width][height];
    // calculates 2 ^ k
    int samplePeriod = 1 << octave;
    float sampleFrequency = 1.0f / samplePeriod;
    for (int i = 0; i < width; i++) {
        int sample_i0 = (i / samplePeriod) * samplePeriod;
        // wrap around
        int sample_i1 = (sample_i0 + samplePeriod) % width;
        float horizontal_blend = (i - sample_i0) * sampleFrequency;
        for (int j = 0; j < height; j++) {
            int sample_j0 = (j / samplePeriod) * samplePeriod;
            // wrap around
            int sample_j1 = (sample_j0 + samplePeriod) % height;
            float vertical_blend = (j - sample_j0) * sampleFrequency;
            float top = interpolate(baseNoise[sample_i0][sample_j0], baseNoise[sample_i1][sample_j0], horizontal_blend);
            float bottom = interpolate(baseNoise[sample_i0][sample_j1], baseNoise[sample_i1][sample_j1], horizontal_blend);
            smoothNoise[i][j] = interpolate(top, bottom, vertical_blend);
        }
    }
    return smoothNoise;
}
