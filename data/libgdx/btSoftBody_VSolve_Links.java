public static void VSolve_Links(btSoftBody psb, float kst) {
    SoftbodyJNI.btSoftBody_VSolve_Links(btSoftBody.getCPtr(psb), psb, kst);
}
