public static void clipHullAgainstHull(Vector3 separatingNormal, btConvexPolyhedron hullA, btConvexPolyhedron hullB, Matrix4 transA, Matrix4 transB, float minDist, float maxDist, btDiscreteCollisionDetectorInterface.Result resultOut) {
    CollisionJNI.btPolyhedralContactClipping_clipHullAgainstHull(separatingNormal, btConvexPolyhedron.getCPtr(hullA), hullA, btConvexPolyhedron.getCPtr(hullB), hullB, transA, transB, minDist, maxDist, btDiscreteCollisionDetectorInterface.Result.getCPtr(resultOut), resultOut);
}
