public void rayTestInternal(btDbvtNode root, Vector3 rayFrom, Vector3 rayTo, Vector3 rayDirectionInverse, long[] signs, float lambda_max, Vector3 aabbMin, Vector3 aabbMax, ICollide policy) {
    CollisionJNI.btDbvt_rayTestInternal(swigCPtr, this, btDbvtNode.getCPtr(root), root, rayFrom, rayTo, rayDirectionInverse, signs, lambda_max, aabbMin, aabbMax, ICollide.getCPtr(policy), policy);
}
