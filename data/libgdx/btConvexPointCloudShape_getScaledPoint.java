public Vector3 getScaledPoint(int index) {
    return CollisionJNI.btConvexPointCloudShape_getScaledPoint(swigCPtr, this, index);
}
