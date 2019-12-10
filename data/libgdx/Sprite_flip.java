/**
 * boolean parameters x,y are not setting a state, but performing a flip
 * @param x perform horizontal flip
 * @param y perform vertical flip
 */
public void flip(boolean x, boolean y) {
    super.flip(x, y);
    float[] vertices = Sprite.this.vertices;
    if (x) {
        float temp = vertices[U1];
        vertices[U1] = vertices[U3];
        vertices[U3] = temp;
        temp = vertices[U2];
        vertices[U2] = vertices[U4];
        vertices[U4] = temp;
    }
    if (y) {
        float temp = vertices[V1];
        vertices[V1] = vertices[V3];
        vertices[V3] = temp;
        temp = vertices[V2];
        vertices[V2] = vertices[V4];
        vertices[V4] = temp;
    }
}
