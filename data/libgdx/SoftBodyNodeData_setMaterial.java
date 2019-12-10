public void setMaterial(SoftBodyMaterialData value) {
    SoftbodyJNI.SoftBodyNodeData_material_set(swigCPtr, this, SoftBodyMaterialData.getCPtr(value), value);
}
