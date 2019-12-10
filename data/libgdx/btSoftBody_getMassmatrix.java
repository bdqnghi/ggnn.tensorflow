public Matrix3 getMassmatrix() {
    return SoftbodyJNI.btSoftBody_Joint_massmatrix_get(swigCPtr, this);
}
