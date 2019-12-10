public void setBody(btSoftBody value) {
    SoftbodyJNI.btSoftBodyCollisionShape_body_set(swigCPtr, this, btSoftBody.getCPtr(value), value);
}
