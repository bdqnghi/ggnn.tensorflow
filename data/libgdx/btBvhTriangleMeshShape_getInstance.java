protected static <T extends MeshPart> btBvhTriangleMeshShape getInstance(final Array<T> meshParts) {
    for (final btBvhTriangleMeshShape instance : instances) {
        if (instance.meshInterface instanceof btTriangleIndexVertexArray && btTriangleIndexVertexArray.compare((btTriangleIndexVertexArray) (instance.meshInterface), meshParts))
            return instance;
    }
    return null;
}
