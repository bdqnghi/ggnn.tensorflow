/**
 * Returns a registered sprite. If no sprite is found but a region exists with the name, a sprite is created from the region
 * and stored in the skin. If the region is an {@link AtlasRegion} then an {@link AtlasSprite} is used if the region has been
 * whitespace stripped or packed rotated 90 degrees.
 */
public Sprite getSprite(String name) {
    Sprite sprite = optional(name, Sprite.class);
    if (sprite != null)
        return sprite;
    try {
        TextureRegion textureRegion = getRegion(name);
        if (textureRegion instanceof AtlasRegion) {
            AtlasRegion region = (AtlasRegion) textureRegion;
            if (region.rotate || region.packedWidth != region.originalWidth || region.packedHeight != region.originalHeight)
                sprite = new AtlasSprite(region);
        }
        if (sprite == null)
            sprite = new Sprite(textureRegion);
        add(name, sprite, Sprite.class);
        return sprite;
    } catch (GdxRuntimeException ex) {
        throw new GdxRuntimeException("No NinePatch, TextureRegion, or Texture registered with name: " + name);
    }
}
