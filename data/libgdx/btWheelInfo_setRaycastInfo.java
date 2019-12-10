public void setRaycastInfo(btWheelInfo.RaycastInfo value) {
    DynamicsJNI.btWheelInfo_raycastInfo_set(swigCPtr, this, btWheelInfo.RaycastInfo.getCPtr(value), value);
}
