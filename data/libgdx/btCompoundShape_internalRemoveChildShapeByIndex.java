private void internalRemoveChildShapeByIndex(int childShapeindex) {
    CollisionJNI.btCompoundShape_internalRemoveChildShapeByIndex(swigCPtr, this, childShapeindex);
}
