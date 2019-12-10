public btBoxShape getBox2() {
    long cPtr = CollisionJNI.btBoxBoxDetector_box2_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btBoxShape(cPtr, false);
}
