public static btConvexHullShape createConvexHullShape(final Model model, boolean optimize) {
    final Mesh mesh = model.meshes.get(0);
    final btConvexHullShape shape = new btConvexHullShape(mesh.getVerticesBuffer(), mesh.getNumVertices(), mesh.getVertexSize());
    if (!optimize)
        return shape;
    // now optimize the shape
    final btShapeHull hull = new btShapeHull(shape);
    hull.buildHull(shape.getMargin());
    final btConvexHullShape result = new btConvexHullShape(hull);
    // delete the temporary shape
    shape.dispose();
    hull.dispose();
    return result;
}
