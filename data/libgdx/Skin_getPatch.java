/**
 * Returns a registered ninepatch. If no ninepatch is found but a region exists with the name, a ninepatch is created from the
 * region and stored in the skin. If the region is an {@link AtlasRegion} then the {@link AtlasRegion#splits} are used,
 * otherwise the ninepatch will have the region as the center patch.
 */
public NinePatch getPatch(String name) {
    NinePatch patch = optional(name, NinePatch.class);
    if (patch != null)
        return patch;
    try {
        TextureRegion region = getRegion(name);
        if (region instanceof AtlasRegion) {
            int[] splits = ((AtlasRegion) region).splits;
            if (splits != null) {
                patch = new NinePatch(region, splits[0], splits[1], splits[2], splits[3]);
                int[] pads = ((AtlasRegion) region).pads;
                if (pads != null)
                    patch.setPadding(pads[0], pads[1], pads[2], pads[3]);
            }
        }
        if (patch == null)
            patch = new NinePatch(region);
        add(name, patch, NinePatch.class);
        return patch;
    } catch (GdxRuntimeException ex) {
        throw new GdxRuntimeException("No NinePatch, TextureRegion, or Texture registered with name: " + name);
    }
}
