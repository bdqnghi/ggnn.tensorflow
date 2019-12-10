public int RemoveReferences(btCollisionShape pcs) {
    return SoftbodyJNI.btSparseSdf3_RemoveReferences(swigCPtr, this, btCollisionShape.getCPtr(pcs), pcs);
}
