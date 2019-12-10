public void setBox2(btBoxShape value) {
    CollisionJNI.btBoxBoxDetector_box2_set(swigCPtr, this, btBoxShape.getCPtr(value), value);
}
