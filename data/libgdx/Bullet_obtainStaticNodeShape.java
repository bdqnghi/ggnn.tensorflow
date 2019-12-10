/**
 * Obtain a {@link btCollisionShape} based on the specified nodes, which can be used for a static body but not for a dynamic
 * body. Depending on the specified nodes the result will be either a {@link btBvhTriangleMeshShape} or a
 * {@link btCompoundShape} of multiple btBvhTriangleMeshShape's. Where possible, the same btBvhTriangleMeshShape will be reused
 * if multiple nodes use the same (mesh) part. The node transformation (translation and rotation) will be included, but scaling
 * will be ignored.
 * @param nodes The nodes for which to obtain a node, typically this would be: `model.nodes`.
 * @return The obtained shape, if you're using reference counting then you can release the shape when no longer needed.
 */
public static btCollisionShape obtainStaticNodeShape(final Array<Node> nodes) {
    getShapeParts(nodes, shapePartArray, 0, shapePartPool);
    btCollisionShape result = obtainStaticShape(shapePartArray);
    shapePartPool.freeAll(shapePartArray);
    shapePartArray.clear();
    return result;
}
