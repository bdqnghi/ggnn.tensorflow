public void ProcessColObj(btSoftBody ps, btCollisionObjectWrapper colObWrap) {
    SoftbodyJNI.btSoftColliders_CollideCL_RS_ProcessColObj(swigCPtr, this, btSoftBody.getCPtr(ps), ps, btCollisionObjectWrapper.getCPtr(colObWrap), colObWrap);
}
