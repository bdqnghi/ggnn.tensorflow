/**
 * Create or reuse a btTriangleIndexVertexArray instance based on the specified {@link MeshPart} array.
 * Use {@link #release()} to release the mesh when it's no longer needed.
 */
public static <T extends MeshPart> btTriangleIndexVertexArray obtain(final Array<T> meshParts) {
    btTriangleIndexVertexArray result = getInstance(meshParts);
    if (result == null) {
        result = new btTriangleIndexVertexArray(meshParts);
        instances.add(result);
    }
    result.obtain();
    return result;
}
