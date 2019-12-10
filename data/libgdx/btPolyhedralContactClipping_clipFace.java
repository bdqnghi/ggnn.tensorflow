public static void clipFace(btVector3Array pVtxIn, btVector3Array ppVtxOut, Vector3 planeNormalWS, float planeEqWS) {
    CollisionJNI.btPolyhedralContactClipping_clipFace(btVector3Array.getCPtr(pVtxIn), pVtxIn, btVector3Array.getCPtr(ppVtxOut), ppVtxOut, planeNormalWS, planeEqWS);
}
