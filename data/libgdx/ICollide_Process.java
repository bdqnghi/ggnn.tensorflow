public void Process(btDbvtNode n, float arg1) {
    if (getClass() == ICollide.class)
        CollisionJNI.ICollide_Process__SWIG_2(swigCPtr, this, btDbvtNode.getCPtr(n), n, arg1);
    else
        CollisionJNI.ICollide_ProcessSwigExplicitICollide__SWIG_2(swigCPtr, this, btDbvtNode.getCPtr(n), n, arg1);
}
