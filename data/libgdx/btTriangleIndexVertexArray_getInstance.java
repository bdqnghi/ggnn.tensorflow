protected static <T extends Object> btTriangleIndexVertexArray getInstance(final Array<T> tags) {
    for (final btTriangleIndexVertexArray instance : instances) {
        if (compare(instance, tags))
            return instance;
    }
    return null;
}
