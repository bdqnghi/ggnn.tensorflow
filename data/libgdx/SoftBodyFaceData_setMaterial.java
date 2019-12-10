public void setMaterial(SoftBodyMaterialData value) {
    SoftbodyJNI.SoftBodyFaceData_material_set(swigCPtr, this, SoftBodyMaterialData.getCPtr(value), value);
}
