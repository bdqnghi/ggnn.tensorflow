/**
 * Creates a new drawable that renders the same as this drawable tinted the specified color.
 */
public SpriteDrawable tint(Color tint) {
    Sprite newSprite;
    if (sprite instanceof AtlasSprite)
        newSprite = new AtlasSprite((AtlasSprite) sprite);
    else
        newSprite = new Sprite(sprite);
    newSprite.setColor(tint);
    newSprite.setSize(getMinWidth(), getMinHeight());
    SpriteDrawable drawable = new SpriteDrawable(newSprite);
    drawable.setLeftWidth(getLeftWidth());
    drawable.setRightWidth(getRightWidth());
    drawable.setTopHeight(getTopHeight());
    drawable.setBottomHeight(getBottomHeight());
    return drawable;
}
