public void setMass(int node, float mass) {
    SoftbodyJNI.btSoftBody_setMass(swigCPtr, this, node, mass);
}
