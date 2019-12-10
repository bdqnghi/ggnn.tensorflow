public static void PSolve_Anchors(btSoftBody psb, float kst, float ti) {
    SoftbodyJNI.btSoftBody_PSolve_Anchors(btSoftBody.getCPtr(psb), psb, kst, ti);
}
