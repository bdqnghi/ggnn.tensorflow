public void refine(btSoftBody.ImplicitFn ifn, float accurary, boolean cut) {
    SoftbodyJNI.btSoftBody_refine(swigCPtr, this, btSoftBody.ImplicitFn.getCPtr(ifn), ifn, accurary, cut);
}
