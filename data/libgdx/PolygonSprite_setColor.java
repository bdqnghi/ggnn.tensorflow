public void setColor(float r, float g, float b, float a) {
    color.set(r, g, b, a);
    int intBits = ((int) (255 * a) << 24) | ((int) (255 * b) << 16) | ((int) (255 * g) << 8) | ((int) (255 * r));
    float color = NumberUtils.intToFloatColor(intBits);
    final float[] vertices = this.vertices;
    for (int i = 2; i < vertices.length; i += Sprite.VERTEX_SIZE) vertices[i] = color;
}
