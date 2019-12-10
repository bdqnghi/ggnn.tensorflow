/**
 * Generate Pascal's triangle
 *
 * @param level The level of the triangle to generate
 * @return The Pascal's triangle kernel
 */
private static float[][] generatePascalsTriangle(int level) {
    if (level < 2)
        level = 2;
    float[][] triangle = new float[level][];
    triangle[0] = new float[1];
    triangle[1] = new float[2];
    triangle[0][0] = 1.0f;
    triangle[1][0] = 1.0f;
    triangle[1][1] = 1.0f;
    for (int i = 2; i < level; i++) {
        triangle[i] = new float[i + 1];
        triangle[i][0] = 1.0f;
        triangle[i][i] = 1.0f;
        for (int j = 1; j < triangle[i].length - 1; j++) triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
    }
    return triangle;
}
