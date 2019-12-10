private int add(TextureRegion region, float color, boolean isStretchW, boolean isStretchH) {
    if (texture == null)
        texture = region.getTexture();
    else if (// 
    texture != region.getTexture())
        throw new IllegalArgumentException("All regions must be from the same texture.");
    float u = region.u;
    float v = region.v2;
    float u2 = region.u2;
    float v2 = region.v;
    // of the texel where the neighboring pixel has 0% contribution in linear blending mode.
    if (isStretchW) {
        float halfTexelWidth = 0.5f * 1.0f / texture.getWidth();
        u += halfTexelWidth;
        u2 -= halfTexelWidth;
    }
    if (isStretchH) {
        float halfTexelHeight = 0.5f * 1.0f / texture.getHeight();
        v -= halfTexelHeight;
        v2 += halfTexelHeight;
    }
    final float[] vertices = this.vertices;
    idx += 2;
    vertices[idx++] = color;
    vertices[idx++] = u;
    vertices[idx] = v;
    idx += 3;
    vertices[idx++] = color;
    vertices[idx++] = u;
    vertices[idx] = v2;
    idx += 3;
    vertices[idx++] = color;
    vertices[idx++] = u2;
    vertices[idx] = v2;
    idx += 3;
    vertices[idx++] = color;
    vertices[idx++] = u2;
    vertices[idx++] = v;
    return idx - 4 * 5;
}
