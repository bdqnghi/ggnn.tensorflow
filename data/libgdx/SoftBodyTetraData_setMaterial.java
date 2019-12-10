public void setMaterial(SoftBodyMaterialData value) {
    SoftbodyJNI.SoftBodyTetraData_material_set(swigCPtr, this, SoftBodyMaterialData.getCPtr(value), value);
}
