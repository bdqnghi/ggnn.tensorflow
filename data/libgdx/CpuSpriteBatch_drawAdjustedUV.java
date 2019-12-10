private void drawAdjustedUV(Texture texture, float x, float y, float originX, float originY, float width, float height, float scaleX, float scaleY, float rotation, float u, float v, float u2, float v2, boolean flipX, boolean flipY) {
    if (!drawing)
        throw new IllegalStateException("CpuSpriteBatch.begin must be called before draw.");
    if (texture != lastTexture)
        switchTexture(texture);
    else if (idx == vertices.length)
        super.flush();
    // bottom left and top right corner points relative to origin
    final float worldOriginX = x + originX;
    final float worldOriginY = y + originY;
    float fx = -originX;
    float fy = -originY;
    float fx2 = width - originX;
    float fy2 = height - originY;
    // scale
    if (scaleX != 1 || scaleY != 1) {
        fx *= scaleX;
        fy *= scaleY;
        fx2 *= scaleX;
        fy2 *= scaleY;
    }
    // construct corner points, start from top left and go counter clockwise
    final float p1x = fx;
    final float p1y = fy;
    final float p2x = fx;
    final float p2y = fy2;
    final float p3x = fx2;
    final float p3y = fy2;
    final float p4x = fx2;
    final float p4y = fy;
    float x1;
    float y1;
    float x2;
    float y2;
    float x3;
    float y3;
    float x4;
    float y4;
    // rotate
    if (rotation != 0) {
        final float cos = MathUtils.cosDeg(rotation);
        final float sin = MathUtils.sinDeg(rotation);
        x1 = cos * p1x - sin * p1y;
        y1 = sin * p1x + cos * p1y;
        x2 = cos * p2x - sin * p2y;
        y2 = sin * p2x + cos * p2y;
        x3 = cos * p3x - sin * p3y;
        y3 = sin * p3x + cos * p3y;
        x4 = x1 + (x3 - x2);
        y4 = y3 - (y2 - y1);
    } else {
        x1 = p1x;
        y1 = p1y;
        x2 = p2x;
        y2 = p2y;
        x3 = p3x;
        y3 = p3y;
        x4 = p4x;
        y4 = p4y;
    }
    x1 += worldOriginX;
    y1 += worldOriginY;
    x2 += worldOriginX;
    y2 += worldOriginY;
    x3 += worldOriginX;
    y3 += worldOriginY;
    x4 += worldOriginX;
    y4 += worldOriginY;
    if (flipX) {
        float tmp = u;
        u = u2;
        u2 = tmp;
    }
    if (flipY) {
        float tmp = v;
        v = v2;
        v2 = tmp;
    }
    Affine2 t = adjustAffine;
    vertices[idx + 0] = t.m00 * x1 + t.m01 * y1 + t.m02;
    vertices[idx + 1] = t.m10 * x1 + t.m11 * y1 + t.m12;
    vertices[idx + 2] = color;
    vertices[idx + 3] = u;
    vertices[idx + 4] = v;
    vertices[idx + 5] = t.m00 * x2 + t.m01 * y2 + t.m02;
    vertices[idx + 6] = t.m10 * x2 + t.m11 * y2 + t.m12;
    vertices[idx + 7] = color;
    vertices[idx + 8] = u;
    vertices[idx + 9] = v2;
    vertices[idx + 10] = t.m00 * x3 + t.m01 * y3 + t.m02;
    vertices[idx + 11] = t.m10 * x3 + t.m11 * y3 + t.m12;
    vertices[idx + 12] = color;
    vertices[idx + 13] = u2;
    vertices[idx + 14] = v2;
    vertices[idx + 15] = t.m00 * x4 + t.m01 * y4 + t.m02;
    vertices[idx + 16] = t.m10 * x4 + t.m11 * y4 + t.m12;
    vertices[idx + 17] = color;
    vertices[idx + 18] = u2;
    vertices[idx + 19] = v;
    idx += Sprite.SPRITE_SIZE;
}
