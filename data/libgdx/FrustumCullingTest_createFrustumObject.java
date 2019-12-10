public static btPairCachingGhostObject createFrustumObject(final Vector3... points) {
    final btPairCachingGhostObject result = new TestPairCachingGhostObject();
    final boolean USE_COMPOUND = true;
    // Using a compound shape is not necessary, but it's good practice to create shapes around the center.
    if (USE_COMPOUND) {
        final Vector3 centerNear = new Vector3(points[2]).sub(points[0]).scl(0.5f).add(points[0]);
        final Vector3 centerFar = new Vector3(points[6]).sub(points[4]).scl(0.5f).add(points[4]);
        final Vector3 center = new Vector3(centerFar).sub(centerNear).scl(0.5f).add(centerNear);
        final btConvexHullShape hullShape = new btConvexHullShape();
        for (int i = 0; i < points.length; i++) hullShape.addPoint(tmpV.set(points[i]).sub(center));
        final btCompoundShape shape = new btCompoundShape();
        shape.addChildShape(tmpM.setToTranslation(center), hullShape);
        result.setCollisionShape(shape);
    } else {
        final btConvexHullShape shape = new btConvexHullShape();
        for (int i = 0; i < points.length; i++) shape.addPoint(points[i]);
        result.setCollisionShape(shape);
    }
    result.setCollisionFlags(btCollisionObject.CollisionFlags.CF_NO_CONTACT_RESPONSE);
    return result;
}
