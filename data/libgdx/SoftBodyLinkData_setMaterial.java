public void setMaterial(SoftBodyMaterialData value) {
    SoftbodyJNI.SoftBodyLinkData_material_set(swigCPtr, this, SoftBodyMaterialData.getCPtr(value), value);
}
