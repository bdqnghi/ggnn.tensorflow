public void addVertex(Vector3 pt) {
    CollisionJNI.btBU_Simplex1to4_addVertex(swigCPtr, this, pt);
}
