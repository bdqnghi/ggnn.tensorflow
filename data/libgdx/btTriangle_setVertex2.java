public void setVertex2(btVector3 value) {
    CollisionJNI.btTriangle_vertex2_set(swigCPtr, this, btVector3.getCPtr(value), value);
}
