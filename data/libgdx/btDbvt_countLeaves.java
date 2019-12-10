public static int countLeaves(btDbvtNode node) {
    return CollisionJNI.btDbvt_countLeaves(btDbvtNode.getCPtr(node), node);
}
