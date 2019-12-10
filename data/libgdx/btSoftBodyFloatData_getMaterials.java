public SWIGTYPE_p_p_SoftBodyMaterialData getMaterials() {
    long cPtr = SoftbodyJNI.btSoftBodyFloatData_materials_get(swigCPtr, this);
    return (cPtr == 0) ? null : new SWIGTYPE_p_p_SoftBodyMaterialData(cPtr, false);
}
