public void setMassmatrix(Matrix3 value) {
    SoftbodyJNI.btSoftBody_Joint_massmatrix_set(swigCPtr, this, value);
}
