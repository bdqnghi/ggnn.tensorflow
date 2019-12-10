public float getSphereRadius(int index) {
    return CollisionJNI.btMultiSphereShape_getSphereRadius(swigCPtr, this, index);
}
