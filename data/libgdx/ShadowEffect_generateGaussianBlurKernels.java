/**
 * Generate the blur kernels which will be repeatedly applied when blurring images
 *
 * @param level The number of kernels to generate
 * @return The kernels generated
 */
private static float[][] generateGaussianBlurKernels(int level) {
    float[][] pascalsTriangle = generatePascalsTriangle(level);
    float[][] gaussianTriangle = new float[pascalsTriangle.length][];
    for (int i = 0; i < gaussianTriangle.length; i++) {
        float total = 0.0f;
        gaussianTriangle[i] = new float[pascalsTriangle[i].length];
        for (int j = 0; j < pascalsTriangle[i].length; j++) total += pascalsTriangle[i][j];
        float coefficient = 1 / total;
        for (int j = 0; j < pascalsTriangle[i].length; j++) gaussianTriangle[i][j] = coefficient * pascalsTriangle[i][j];
    }
    return gaussianTriangle;
}
