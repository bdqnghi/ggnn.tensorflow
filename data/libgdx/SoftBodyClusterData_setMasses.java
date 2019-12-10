public void setMasses(java.nio.FloatBuffer value) {
    assert value.isDirect() : "Buffer must be allocated direct.";
    {
        SoftbodyJNI.SoftBodyClusterData_masses_set(swigCPtr, this, value);
    }
}
