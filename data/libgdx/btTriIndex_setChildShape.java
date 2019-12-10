public void setChildShape(btCollisionShape value) {
    SoftbodyJNI.btTriIndex_childShape_set(swigCPtr, this, btCollisionShape.getCPtr(value), value);
}
