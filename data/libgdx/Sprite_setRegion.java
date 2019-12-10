public void setRegion(float u, float v, float u2, float v2) {
    super.setRegion(u, v, u2, v2);
    float[] vertices = Sprite.this.vertices;
    vertices[U1] = u;
    vertices[V1] = v2;
    vertices[U2] = u;
    vertices[V2] = v;
    vertices[U3] = u2;
    vertices[V3] = v;
    vertices[U4] = u2;
    vertices[V4] = v2;
}
