public Vector3 getSpherePosition(int index) {
    return CollisionJNI.btMultiSphereShape_getSpherePosition(swigCPtr, this, index);
}
