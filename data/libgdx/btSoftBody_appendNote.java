public void appendNote(String text, Vector3 o, btSoftBody.Face feature) {
    SoftbodyJNI.btSoftBody_appendNote__SWIG_8(swigCPtr, this, text, o, btSoftBody.Face.getCPtr(feature), feature);
}
