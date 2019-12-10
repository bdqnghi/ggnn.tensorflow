public void setNormal(btVector3 value) {
    LinearMathJNI.btPlane_normal_set(swigCPtr, this, btVector3.getCPtr(value), value);
}
