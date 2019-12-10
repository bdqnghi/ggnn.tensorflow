/**
 * Rotates this sprite 90 degrees in-place by rotating the texture coordinates. This rotation is unaffected by
 * {@link #setRotation(float)} and {@link #rotate(float)}.
 */
public void rotate90(boolean clockwise) {
    float[] vertices = this.vertices;
    if (clockwise) {
        float temp = vertices[V1];
        vertices[V1] = vertices[V4];
        vertices[V4] = vertices[V3];
        vertices[V3] = vertices[V2];
        vertices[V2] = temp;
        temp = vertices[U1];
        vertices[U1] = vertices[U4];
        vertices[U4] = vertices[U3];
        vertices[U3] = vertices[U2];
        vertices[U2] = temp;
    } else {
        float temp = vertices[V1];
        vertices[V1] = vertices[V2];
        vertices[V2] = vertices[V3];
        vertices[V3] = vertices[V4];
        vertices[V4] = temp;
        temp = vertices[U1];
        vertices[U1] = vertices[U2];
        vertices[U2] = vertices[U3];
        vertices[U3] = vertices[U4];
        vertices[U4] = temp;
    }
}
