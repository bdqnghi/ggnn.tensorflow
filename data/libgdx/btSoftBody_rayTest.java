public int rayTest(Vector3 rayFrom, Vector3 rayTo, SWIGTYPE_p_float mint, SWIGTYPE_p_btSoftBody__eFeature___ feature, SWIGTYPE_p_int index, boolean bcountonly) {
    return SoftbodyJNI.btSoftBody_rayTest__SWIG_1(swigCPtr, this, rayFrom, rayTo, SWIGTYPE_p_float.getCPtr(mint), SWIGTYPE_p_btSoftBody__eFeature___.getCPtr(feature), SWIGTYPE_p_int.getCPtr(index), bcountonly);
}
