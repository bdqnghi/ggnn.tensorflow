public static btCollisionShape obtainStaticShape(final Array<ShapePart> parts) {
    if (parts.size == 0)
        return null;
    if (parts.size == 1 && Arrays.equals(parts.get(0).transform.val, idt.val))
        return btBvhTriangleMeshShape.obtain(parts.get(0).parts);
    btCompoundShape result = new btCompoundShape();
    result.obtain();
    for (int i = 0, n = parts.size; i < n; i++) {
        final btBvhTriangleMeshShape shape = btBvhTriangleMeshShape.obtain(parts.get(i).parts);
        result.addChildShape(parts.get(i).transform, shape);
        shape.release();
    }
    return result;
}
