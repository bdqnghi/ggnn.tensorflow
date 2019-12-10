public btBoxShape getBox1() {
    long cPtr = CollisionJNI.btBoxBoxDetector_box1_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btBoxShape(cPtr, false);
}
