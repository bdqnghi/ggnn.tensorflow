public static void PSolve_RContacts(btSoftBody psb, float kst, float ti) {
    SoftbodyJNI.btSoftBody_PSolve_RContacts(btSoftBody.getCPtr(psb), psb, kst, ti);
}
