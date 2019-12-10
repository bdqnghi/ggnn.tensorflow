/**
 * Make this sprite a copy in every way of the specified sprite
 */
public void set(Sprite sprite) {
    if (sprite == null)
        throw new IllegalArgumentException("sprite cannot be null.");
    System.arraycopy(sprite.vertices, 0, vertices, 0, SPRITE_SIZE);
    texture = sprite.texture;
    u = sprite.u;
    v = sprite.v;
    u2 = sprite.u2;
    v2 = sprite.v2;
    x = sprite.x;
    y = sprite.y;
    width = sprite.width;
    height = sprite.height;
    regionWidth = sprite.regionWidth;
    regionHeight = sprite.regionHeight;
    originX = sprite.originX;
    originY = sprite.originY;
    rotation = sprite.rotation;
    scaleX = sprite.scaleX;
    scaleY = sprite.scaleY;
    color.set(sprite.color);
    dirty = sprite.dirty;
}
