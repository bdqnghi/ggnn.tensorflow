public void setEulerZYX(float yaw, float pitch, float roll) {
    LinearMathJNI.btQuaternion_setEulerZYX(swigCPtr, this, yaw, pitch, roll);
}
