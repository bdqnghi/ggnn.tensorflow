public float Eval(Vector3 x) {
    return SoftbodyJNI.btSoftBody_ImplicitFn_Eval(swigCPtr, this, x);
}
