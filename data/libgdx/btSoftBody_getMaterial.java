public btSoftBody.Material getMaterial() {
    long cPtr = SoftbodyJNI.btSoftBody_Feature_material_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btSoftBody.Material(cPtr, false);
}
