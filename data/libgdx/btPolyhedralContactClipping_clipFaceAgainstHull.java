public static void clipFaceAgainstHull(Vector3 separatingNormal, btConvexPolyhedron hullA, Matrix4 transA, btVector3Array worldVertsB1, float minDist, float maxDist, btDiscreteCollisionDetectorInterface.Result resultOut) {
    CollisionJNI.btPolyhedralContactClipping_clipFaceAgainstHull(separatingNormal, btConvexPolyhedron.getCPtr(hullA), hullA, transA, btVector3Array.getCPtr(worldVertsB1), worldVertsB1, minDist, maxDist, btDiscreteCollisionDetectorInterface.Result.getCPtr(resultOut), resultOut);
}
