public static void rayTest(btDbvtNode root, Vector3 rayFrom, Vector3 rayTo, ICollide policy) {
    CollisionJNI.btDbvt_rayTest(btDbvtNode.getCPtr(root), root, rayFrom, rayTo, ICollide.getCPtr(policy), policy);
}
