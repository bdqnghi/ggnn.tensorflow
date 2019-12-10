public void setWeights(java.nio.FloatBuffer value) {
    assert value.isDirect() : "Buffer must be allocated direct.";
    {
        SoftbodyJNI.SoftBodyPoseData_weights_set(swigCPtr, this, value);
    }
}
