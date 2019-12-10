public static void EvaluateMedium(btSoftBodyWorldInfo wfi, Vector3 x, btSoftBody.sMedium medium) {
    SoftbodyJNI.EvaluateMedium(btSoftBodyWorldInfo.getCPtr(wfi), wfi, x, btSoftBody.sMedium.getCPtr(medium), medium);
}
