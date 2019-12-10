public static int maxdepth(btDbvtNode node) {
    return CollisionJNI.btDbvt_maxdepth(btDbvtNode.getCPtr(node), node);
}
