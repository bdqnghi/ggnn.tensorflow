public static void DrawFrame(btSoftBody psb, btIDebugDraw idraw) {
    SoftbodyJNI.btSoftBodyHelpers_DrawFrame(btSoftBody.getCPtr(psb), psb, btIDebugDraw.getCPtr(idraw), idraw);
}
