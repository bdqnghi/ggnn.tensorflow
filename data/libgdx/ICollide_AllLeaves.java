public boolean AllLeaves(btDbvtNode arg0) {
    return (getClass() == ICollide.class) ? CollisionJNI.ICollide_AllLeaves(swigCPtr, this, btDbvtNode.getCPtr(arg0), arg0) : CollisionJNI.ICollide_AllLeavesSwigExplicitICollide(swigCPtr, this, btDbvtNode.getCPtr(arg0), arg0);
}
