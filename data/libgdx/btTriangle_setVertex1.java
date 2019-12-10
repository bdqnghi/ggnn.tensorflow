public void setVertex1(btVector3 value) {
    CollisionJNI.btTriangle_vertex1_set(swigCPtr, this, btVector3.getCPtr(value), value);
}
