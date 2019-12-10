/**
 * Sets the position of the text, relative to its current position.
 * @param xAmount The amount in x to move the text
 * @param yAmount The amount in y to move the text
 */
public void translate(float xAmount, float yAmount) {
    if (xAmount == 0 && yAmount == 0)
        return;
    if (integer) {
        xAmount = Math.round(xAmount);
        yAmount = Math.round(yAmount);
    }
    x += xAmount;
    y += yAmount;
    float[][] pageVertices = this.pageVertices;
    for (int i = 0, n = pageVertices.length; i < n; i++) {
        float[] vertices = pageVertices[i];
        for (int ii = 0, nn = idx[i]; ii < nn; ii += 5) {
            vertices[ii] += xAmount;
            vertices[ii + 1] += yAmount;
        }
    }
}
