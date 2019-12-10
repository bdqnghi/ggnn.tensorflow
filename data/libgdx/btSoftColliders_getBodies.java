public SWIGTYPE_p_p_btSoftBody getBodies() {
    long cPtr = SoftbodyJNI.btSoftColliders_CollideCL_SS_bodies_get(swigCPtr, this);
    return (cPtr == 0) ? null : new SWIGTYPE_p_p_btSoftBody(cPtr, false);
}
