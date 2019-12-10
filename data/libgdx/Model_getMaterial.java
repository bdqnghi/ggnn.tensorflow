/**
 * @param id The ID of the material to fetch.
 * @param ignoreCase whether to use case sensitivity when comparing the material id.
 * @return The {@link Material} with the specified id, or null if not available.
 */
public Material getMaterial(final String id, boolean ignoreCase) {
    final int n = materials.size;
    Material material;
    if (ignoreCase) {
        for (int i = 0; i < n; i++) if ((material = materials.get(i)).id.equalsIgnoreCase(id))
            return material;
    } else {
        for (int i = 0; i < n; i++) if ((material = materials.get(i)).id.equals(id))
            return material;
    }
    return null;
}
