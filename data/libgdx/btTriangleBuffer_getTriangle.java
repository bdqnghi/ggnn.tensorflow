public btTriangle getTriangle(int index) {
    return new btTriangle(CollisionJNI.btTriangleBuffer_getTriangle(swigCPtr, this, index), false);
}
