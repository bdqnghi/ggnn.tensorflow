public float getMass(int node) {
    return SoftbodyJNI.btSoftBody_getMass(swigCPtr, this, node);
}
