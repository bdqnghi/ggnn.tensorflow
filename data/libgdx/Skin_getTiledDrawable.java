/**
 * Returns a registered tiled drawable. If no tiled drawable is found but a region exists with the name, a tiled drawable is
 * created from the region and stored in the skin.
 */
public TiledDrawable getTiledDrawable(String name) {
    TiledDrawable tiled = optional(name, TiledDrawable.class);
    if (tiled != null)
        return tiled;
    tiled = new TiledDrawable(getRegion(name));
    tiled.setName(name);
    add(name, tiled, TiledDrawable.class);
    return tiled;
}
