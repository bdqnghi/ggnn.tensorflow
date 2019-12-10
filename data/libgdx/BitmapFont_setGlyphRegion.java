public void setGlyphRegion(Glyph glyph, TextureRegion region) {
    Texture texture = region.getTexture();
    float invTexWidth = 1.0f / texture.getWidth();
    float invTexHeight = 1.0f / texture.getHeight();
    float offsetX = 0, offsetY = 0;
    float u = region.u;
    float v = region.v;
    float regionWidth = region.getRegionWidth();
    float regionHeight = region.getRegionHeight();
    if (region instanceof AtlasRegion) {
        // Compensate for whitespace stripped from left and top edges.
        AtlasRegion atlasRegion = (AtlasRegion) region;
        offsetX = atlasRegion.offsetX;
        offsetY = atlasRegion.originalHeight - atlasRegion.packedHeight - atlasRegion.offsetY;
    }
    float x = glyph.srcX;
    float x2 = glyph.srcX + glyph.width;
    float y = glyph.srcY;
    float y2 = glyph.srcY + glyph.height;
    // Shift glyph for left and top edge stripped whitespace. Clip glyph for right and bottom edge stripped whitespace.
    if (offsetX > 0) {
        x -= offsetX;
        if (x < 0) {
            glyph.width += x;
            glyph.xoffset -= x;
            x = 0;
        }
        x2 -= offsetX;
        if (x2 > regionWidth) {
            glyph.width -= x2 - regionWidth;
            x2 = regionWidth;
        }
    }
    if (offsetY > 0) {
        y -= offsetY;
        if (y < 0) {
            glyph.height += y;
            y = 0;
        }
        y2 -= offsetY;
        if (y2 > regionHeight) {
            float amount = y2 - regionHeight;
            glyph.height -= amount;
            glyph.yoffset += amount;
            y2 = regionHeight;
        }
    }
    glyph.u = u + x * invTexWidth;
    glyph.u2 = u + x2 * invTexWidth;
    if (flipped) {
        glyph.v = v + y * invTexHeight;
        glyph.v2 = v + y2 * invTexHeight;
    } else {
        glyph.v2 = v + y * invTexHeight;
        glyph.v = v + y2 * invTexHeight;
    }
}
