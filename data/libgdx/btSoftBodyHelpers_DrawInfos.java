public static void DrawInfos(btSoftBody psb, btIDebugDraw idraw, boolean masses, boolean areas, boolean stress) {
    SoftbodyJNI.btSoftBodyHelpers_DrawInfos(btSoftBody.getCPtr(psb), psb, btIDebugDraw.getCPtr(idraw), idraw, masses, areas, stress);
}
