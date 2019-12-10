public void setVertices3f(btVector3FloatData value) {
    CollisionJNI.btMeshPartData_vertices3f_set(swigCPtr, this, btVector3FloatData.getCPtr(value), value);
}
