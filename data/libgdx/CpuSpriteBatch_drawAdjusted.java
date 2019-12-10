private void drawAdjusted(Texture texture, float[] spriteVertices, int offset, int count) {
    if (!drawing)
        throw new IllegalStateException("CpuSpriteBatch.begin must be called before draw.");
    if (texture != lastTexture)
        switchTexture(texture);
    Affine2 t = adjustAffine;
    int copyCount = Math.min(vertices.length - idx, count);
    do {
        count -= copyCount;
        while (copyCount > 0) {
            float x = spriteVertices[offset];
            float y = spriteVertices[offset + 1];
            // x
            vertices[idx] = t.m00 * x + t.m01 * y + t.m02;
            // y
            vertices[idx + 1] = t.m10 * x + t.m11 * y + t.m12;
            // color
            vertices[idx + 2] = spriteVertices[offset + 2];
            // u
            vertices[idx + 3] = spriteVertices[offset + 3];
            // v
            vertices[idx + 4] = spriteVertices[offset + 4];
            idx += Sprite.VERTEX_SIZE;
            offset += Sprite.VERTEX_SIZE;
            copyCount -= Sprite.VERTEX_SIZE;
        }
        if (count > 0) {
            super.flush();
            copyCount = Math.min(vertices.length, count);
        }
    } while (count > 0);
}
