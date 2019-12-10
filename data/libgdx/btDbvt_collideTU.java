public static void collideTU(btDbvtNode root, ICollide policy) {
    CollisionJNI.btDbvt_collideTU(btDbvtNode.getCPtr(root), root, ICollide.getCPtr(policy), policy);
}
