public void setBox1(btBoxShape value) {
    CollisionJNI.btBoxBoxDetector_box1_set(swigCPtr, this, btBoxShape.getCPtr(value), value);
}
