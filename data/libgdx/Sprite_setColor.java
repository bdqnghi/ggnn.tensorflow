/**
 * @see #setColor(Color)
 * @see Color#toFloatBits()
 */
public void setColor(float color) {
    float[] vertices = this.vertices;
    vertices[C1] = color;
    vertices[C2] = color;
    vertices[C3] = color;
    vertices[C4] = color;
}
