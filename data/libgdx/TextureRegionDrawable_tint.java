/**
 * Creates a new drawable that renders the same as this drawable tinted the specified color.
 */
public Drawable tint(Color tint) {
    Sprite sprite;
    if (region instanceof AtlasRegion)
        sprite = new AtlasSprite((AtlasRegion) region);
    else
        sprite = new Sprite(region);
    sprite.setColor(tint);
    sprite.setSize(getMinWidth(), getMinHeight());
    SpriteDrawable drawable = new SpriteDrawable(sprite);
    drawable.setLeftWidth(getLeftWidth());
    drawable.setRightWidth(getRightWidth());
    drawable.setTopHeight(getTopHeight());
    drawable.setBottomHeight(getBottomHeight());
    return drawable;
}
