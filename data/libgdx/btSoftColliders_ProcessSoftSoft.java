public void ProcessSoftSoft(btSoftBody psa, btSoftBody psb) {
    SoftbodyJNI.btSoftColliders_CollideCL_SS_ProcessSoftSoft(swigCPtr, this, btSoftBody.getCPtr(psa), psa, btSoftBody.getCPtr(psb), psb);
}
