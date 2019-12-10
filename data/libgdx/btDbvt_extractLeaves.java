public static void extractLeaves(btDbvtNode node, SWIGTYPE_p_btAlignedObjectArrayT_btDbvtNode_const_p_t leaves) {
    CollisionJNI.btDbvt_extractLeaves(btDbvtNode.getCPtr(node), node, SWIGTYPE_p_btAlignedObjectArrayT_btDbvtNode_const_p_t.getCPtr(leaves));
}
