public void setVertices(Vector3 v0, Vector3 v1, Vector3 v2, Vector3 v3) {
    CollisionJNI.btTetrahedronShapeEx_setVertices(swigCPtr, this, v0, v1, v2, v3);
}
