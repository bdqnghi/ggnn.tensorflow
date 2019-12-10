/**
 * Create or reuse a btIndexedMesh instance based on the specified tag.
 * Use {@link #release()} to release the mesh when it's no longer needed.
 */
public static btIndexedMesh obtain(final Object tag, final FloatBuffer vertices, int sizeInBytesOfEachVertex, int vertexCount, int positionOffsetInBytes, final ShortBuffer indices, int indexOffset, int indexCount) {
    if (tag == null)
        throw new GdxRuntimeException("tag cannot be null");
    btIndexedMesh result = getInstance(tag);
    if (result == null) {
        result = new btIndexedMesh(vertices, sizeInBytesOfEachVertex, vertexCount, positionOffsetInBytes, indices, indexOffset, indexCount);
        result.tag = tag;
        instances.add(result);
    }
    result.obtain();
    return result;
}
