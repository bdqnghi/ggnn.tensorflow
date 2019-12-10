public void setVertices1(btVector3 value) {
    CollisionJNI.btTriangleShape_vertices1_set(swigCPtr, this, btVector3.getCPtr(value), value);
}
