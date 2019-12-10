public static boolean findSeparatingAxis(btConvexPolyhedron hullA, btConvexPolyhedron hullB, Matrix4 transA, Matrix4 transB, Vector3 sep, btDiscreteCollisionDetectorInterface.Result resultOut) {
    return CollisionJNI.btPolyhedralContactClipping_findSeparatingAxis(btConvexPolyhedron.getCPtr(hullA), hullA, btConvexPolyhedron.getCPtr(hullB), hullB, transA, transB, sep, btDiscreteCollisionDetectorInterface.Result.getCPtr(resultOut), resultOut);
}
