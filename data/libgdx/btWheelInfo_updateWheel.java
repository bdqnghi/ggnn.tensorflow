public void updateWheel(btRigidBody chassis, btWheelInfo.RaycastInfo raycastInfo) {
    DynamicsJNI.btWheelInfo_updateWheel(swigCPtr, this, btRigidBody.getCPtr(chassis), chassis, btWheelInfo.RaycastInfo.getCPtr(raycastInfo), raycastInfo);
}
