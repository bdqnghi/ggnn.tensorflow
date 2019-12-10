/**
 * Returns the first region found with the specified name as a {@link NinePatch}. The region must have been packed with
 * ninepatch splits. This method uses string comparison to find the region and constructs a new ninepatch, so the result should
 * be cached rather than calling this method multiple times.
 * @return The ninepatch, or null.
 */
public NinePatch createPatch(String name) {
    for (int i = 0, n = regions.size; i < n; i++) {
        AtlasRegion region = regions.get(i);
        if (region.name.equals(name)) {
            int[] splits = region.splits;
            if (splits == null)
                throw new IllegalArgumentException("Region does not have ninepatch splits: " + name);
            NinePatch patch = new NinePatch(region, splits[0], splits[1], splits[2], splits[3]);
            if (region.pads != null)
                patch.setPadding(region.pads[0], region.pads[1], region.pads[2], region.pads[3]);
            return patch;
        }
    }
    return null;
}
