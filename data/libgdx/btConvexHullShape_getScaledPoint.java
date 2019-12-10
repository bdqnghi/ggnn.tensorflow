public Vector3 getScaledPoint(int i) {
    return CollisionJNI.btConvexHullShape_getScaledPoint(swigCPtr, this, i);
}
