public boolean SolveContact(btGjkEpaSolver2.sResults res, btSoftBody.Body ba, btSoftBody.Body bb, btSoftBody.CJoint joint) {
    return SoftbodyJNI.btSoftColliders_ClusterBase_SolveContact(swigCPtr, this, btGjkEpaSolver2.sResults.getCPtr(res), res, btSoftBody.Body.getCPtr(ba), ba, btSoftBody.Body.getCPtr(bb), bb, btSoftBody.CJoint.getCPtr(joint), joint);
}
