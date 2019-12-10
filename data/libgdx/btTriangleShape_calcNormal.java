public void calcNormal(Vector3 normal) {
    CollisionJNI.btTriangleShape_calcNormal(swigCPtr, this, normal);
}
