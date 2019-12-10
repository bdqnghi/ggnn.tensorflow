public void setMaterial(btSoftBody.Material value) {
    SoftbodyJNI.btSoftBody_Feature_material_set(swigCPtr, this, btSoftBody.Material.getCPtr(value), value);
}
