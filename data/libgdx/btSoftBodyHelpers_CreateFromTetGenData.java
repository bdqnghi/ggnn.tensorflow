public static btSoftBody CreateFromTetGenData(btSoftBodyWorldInfo worldInfo, String ele, String face, String node, boolean bfacelinks, boolean btetralinks, boolean bfacesfromtetras) {
    long cPtr = SoftbodyJNI.btSoftBodyHelpers_CreateFromTetGenData(btSoftBodyWorldInfo.getCPtr(worldInfo), worldInfo, ele, face, node, bfacelinks, btetralinks, bfacesfromtetras);
    return (cPtr == 0) ? null : new btSoftBody(cPtr, false);
}
