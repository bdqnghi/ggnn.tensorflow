public void collideTV(btDbvtNode root, btDbvtAabbMm volume, ICollide policy) {
    CollisionJNI.btDbvt_collideTV(swigCPtr, this, btDbvtNode.getCPtr(root), root, btDbvtAabbMm.getCPtr(volume), volume, ICollide.getCPtr(policy), policy);
}
