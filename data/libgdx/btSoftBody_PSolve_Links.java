public static void PSolve_Links(btSoftBody psb, float kst, float ti) {
    SoftbodyJNI.btSoftBody_PSolve_Links(btSoftBody.getCPtr(psb), psb, kst, ti);
}
