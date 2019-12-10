public void set(PolygonSprite sprite) {
    if (sprite == null)
        throw new IllegalArgumentException("sprite cannot be null.");
    setRegion(sprite.region);
    x = sprite.x;
    y = sprite.y;
    width = sprite.width;
    height = sprite.height;
    originX = sprite.originX;
    originY = sprite.originY;
    rotation = sprite.rotation;
    scaleX = sprite.scaleX;
    scaleY = sprite.scaleY;
    color.set(sprite.color);
    dirty = sprite.dirty;
}
