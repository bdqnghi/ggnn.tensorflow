/**
 * @return Whether the supplied array contains all specified tags.
 */
public static <T extends Object> boolean compare(final btTriangleIndexVertexArray array, final Array<T> tags) {
    if (array.meshes.size != tags.size)
        return false;
    for (final btIndexedMesh mesh : array.meshes) {
        boolean found = false;
        final Object tag = mesh.tag;
        if (tag == null)
            return false;
        for (final T t : tags) {
            if (t.equals(tag)) {
                found = true;
                break;
            }
        }
        if (!found)
            return false;
    }
    return true;
}
