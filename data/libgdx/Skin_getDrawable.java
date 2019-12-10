/**
 * Returns a registered drawable. If no drawable is found but a region, ninepatch, or sprite exists with the name, then the
 * appropriate drawable is created and stored in the skin.
 */
public Drawable getDrawable(String name) {
    Drawable drawable = optional(name, Drawable.class);
    if (drawable != null)
        return drawable;
    // Use texture or texture region. If it has splits, use ninepatch. If it has rotation or whitespace stripping, use sprite.
    try {
        TextureRegion textureRegion = getRegion(name);
        if (textureRegion instanceof AtlasRegion) {
            AtlasRegion region = (AtlasRegion) textureRegion;
            if (region.splits != null)
                drawable = new NinePatchDrawable(getPatch(name));
            else if (region.rotate || region.packedWidth != region.originalWidth || region.packedHeight != region.originalHeight)
                drawable = new SpriteDrawable(getSprite(name));
        }
        if (drawable == null)
            drawable = new TextureRegionDrawable(textureRegion);
    } catch (GdxRuntimeException ignored) {
    }
    // Check for explicit registration of ninepatch, sprite, or tiled drawable.
    if (drawable == null) {
        NinePatch patch = optional(name, NinePatch.class);
        if (patch != null)
            drawable = new NinePatchDrawable(patch);
        else {
            Sprite sprite = optional(name, Sprite.class);
            if (sprite != null)
                drawable = new SpriteDrawable(sprite);
            else
                throw new GdxRuntimeException("No Drawable, NinePatch, TextureRegion, Texture, or Sprite registered with name: " + name);
        }
    }
    if (drawable instanceof BaseDrawable)
        ((BaseDrawable) drawable).setName(name);
    add(name, drawable, Drawable.class);
    return drawable;
}
