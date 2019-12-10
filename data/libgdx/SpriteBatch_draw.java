@Override
public void draw(TextureRegion region, float width, float height, Affine2 transform) {
    if (!drawing)
        throw new IllegalStateException("SpriteBatch.begin must be called before draw.");
    float[] vertices = this.vertices;
    Texture texture = region.texture;
    if (texture != lastTexture) {
        switchTexture(texture);
    } else if (idx == vertices.length) {
        flush();
    }
    // construct corner points
    float x1 = transform.m02;
    float y1 = transform.m12;
    float x2 = transform.m01 * height + transform.m02;
    float y2 = transform.m11 * height + transform.m12;
    float x3 = transform.m00 * width + transform.m01 * height + transform.m02;
    float y3 = transform.m10 * width + transform.m11 * height + transform.m12;
    float x4 = transform.m00 * width + transform.m02;
    float y4 = transform.m10 * width + transform.m12;
    float u = region.u;
    float v = region.v2;
    float u2 = region.u2;
    float v2 = region.v;
    float color = this.color;
    int idx = this.idx;
    vertices[idx++] = x1;
    vertices[idx++] = y1;
    vertices[idx++] = color;
    vertices[idx++] = u;
    vertices[idx++] = v;
    vertices[idx++] = x2;
    vertices[idx++] = y2;
    vertices[idx++] = color;
    vertices[idx++] = u;
    vertices[idx++] = v2;
    vertices[idx++] = x3;
    vertices[idx++] = y3;
    vertices[idx++] = color;
    vertices[idx++] = u2;
    vertices[idx++] = v2;
    vertices[idx++] = x4;
    vertices[idx++] = y4;
    vertices[idx++] = color;
    vertices[idx++] = u2;
    vertices[idx++] = v;
    this.idx = idx;
}
