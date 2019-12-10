public static void enumNodes(btDbvtNode root, ICollide policy) {
    CollisionJNI.btDbvt_enumNodes(btDbvtNode.getCPtr(root), root, ICollide.getCPtr(policy), policy);
}
