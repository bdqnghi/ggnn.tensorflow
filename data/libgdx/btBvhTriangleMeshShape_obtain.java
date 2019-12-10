/**
 * Obtain an instance of btBvhTriangleMeshShape, made up of the specified {@link MeshPart} instances.
 * Where possible previously obtained objects are reused. You must call {@link #release()},
 * when you no longer need the shape.
 */
public static <T extends MeshPart> btBvhTriangleMeshShape obtain(final Array<T> meshParts) {
    btBvhTriangleMeshShape result = getInstance(meshParts);
    if (result == null) {
        result = new btBvhTriangleMeshShape(btTriangleIndexVertexArray.obtain(meshParts), true);
        instances.add(result);
    }
    result.obtain();
    return result;
}
