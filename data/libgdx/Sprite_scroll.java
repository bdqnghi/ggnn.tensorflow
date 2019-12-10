public void scroll(float xAmount, float yAmount) {
    float[] vertices = Sprite.this.vertices;
    if (xAmount != 0) {
        float u = (vertices[U1] + xAmount) % 1;
        float u2 = u + width / texture.getWidth();
        this.u = u;
        this.u2 = u2;
        vertices[U1] = u;
        vertices[U2] = u;
        vertices[U3] = u2;
        vertices[U4] = u2;
    }
    if (yAmount != 0) {
        float v = (vertices[V2] + yAmount) % 1;
        float v2 = v + height / texture.getHeight();
        this.v = v;
        this.v2 = v2;
        vertices[V1] = v2;
        vertices[V2] = v;
        vertices[V3] = v;
        vertices[V4] = v2;
    }
}
