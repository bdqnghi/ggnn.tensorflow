public static void PSolve_SContacts(btSoftBody psb, float arg1, float ti) {
    SoftbodyJNI.btSoftBody_PSolve_SContacts(btSoftBody.getCPtr(psb), psb, arg1, ti);
}
