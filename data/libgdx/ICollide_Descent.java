public boolean Descent(btDbvtNode arg0) {
    return (getClass() == ICollide.class) ? CollisionJNI.ICollide_Descent(swigCPtr, this, btDbvtNode.getCPtr(arg0), arg0) : CollisionJNI.ICollide_DescentSwigExplicitICollide(swigCPtr, this, btDbvtNode.getCPtr(arg0), arg0);
}
