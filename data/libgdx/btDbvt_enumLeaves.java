public static void enumLeaves(btDbvtNode root, ICollide policy) {
    CollisionJNI.btDbvt_enumLeaves(btDbvtNode.getCPtr(root), root, ICollide.getCPtr(policy), policy);
}
