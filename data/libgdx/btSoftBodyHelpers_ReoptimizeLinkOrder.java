public static void ReoptimizeLinkOrder(btSoftBody psb) {
    SoftbodyJNI.btSoftBodyHelpers_ReoptimizeLinkOrder(btSoftBody.getCPtr(psb), psb);
}
