public SWIGTYPE_p_btAlignedObjectArrayT_btSoftBody__Material_p_t getMaterials() {
    long cPtr = SoftbodyJNI.btSoftBody_materials_get(swigCPtr, this);
    return (cPtr == 0) ? null : new SWIGTYPE_p_btAlignedObjectArrayT_btSoftBody__Material_p_t(cPtr, false);
}
