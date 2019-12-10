public void setEuler(float yaw, float pitch, float roll) {
    LinearMathJNI.btQuaternion_setEuler(swigCPtr, this, yaw, pitch, roll);
}
