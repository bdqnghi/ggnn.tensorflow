/**
 * Returns a registered texture region. If no region is found but a texture exists with the name, a region is created from the
 * texture and stored in the skin.
 */
public TextureRegion getRegion(String name) {
    TextureRegion region = optional(name, TextureRegion.class);
    if (region != null)
        return region;
    Texture texture = optional(name, Texture.class);
    if (texture == null)
        throw new GdxRuntimeException("No TextureRegion or Texture registered with name: " + name);
    region = new TextureRegion(texture);
    add(name, region, TextureRegion.class);
    return region;
}
