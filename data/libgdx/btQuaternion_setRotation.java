public void setRotation(Vector3 axis, float _angle) {
    LinearMathJNI.btQuaternion_setRotation(swigCPtr, this, axis, _angle);
}
