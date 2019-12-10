public Matrix4 getChildTransform(int index) {
    return CollisionJNI.btGImpactShapeInterface_getChildTransform(swigCPtr, this, index);
}
