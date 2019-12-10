public SWIGTYPE_p_p_btSoftBody getPsb() {
    long cPtr = SoftbodyJNI.btSoftColliders_CollideVF_SS_psb_get(swigCPtr, this);
    return (cPtr == 0) ? null : new SWIGTYPE_p_p_btSoftBody(cPtr, false);
}
