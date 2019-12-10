public void collideTT(btDbvtNode root0, btDbvtNode root1, ICollide policy) {
    CollisionJNI.btDbvt_collideTT(swigCPtr, this, btDbvtNode.getCPtr(root0), root0, btDbvtNode.getCPtr(root1), root1, ICollide.getCPtr(policy), policy);
}
