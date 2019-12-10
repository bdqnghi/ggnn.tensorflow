public static <T extends Node> void getShapeParts(final Iterable<T> nodes, final Array<ShapePart> out, final int offset, final Pool<ShapePart> pool) {
    for (T node : nodes) getShapeParts(node, true, out, offset, pool);
}
