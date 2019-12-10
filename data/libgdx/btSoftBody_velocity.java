public Vector3 velocity(Vector3 rpos) {
    return SoftbodyJNI.btSoftBody_Body_velocity(swigCPtr, this, rpos);
}
