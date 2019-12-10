static private long SwigConstructbtHeightfieldTerrainShape(int heightStickWidth, int heightStickLength, java.nio.ShortBuffer heightfieldData, float heightScale, float minHeight, float maxHeight, int upAxis, boolean flipQuadEdges) {
    assert heightfieldData.isDirect() : "Buffer must be allocated direct.";
    return CollisionJNI.new_btHeightfieldTerrainShape__SWIG_1(heightStickWidth, heightStickLength, heightfieldData, heightScale, minHeight, maxHeight, upAxis, flipQuadEdges);
}
