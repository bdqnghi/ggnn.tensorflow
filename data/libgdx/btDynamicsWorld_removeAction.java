public void removeAction(btActionInterface action) {
    DynamicsJNI.btDynamicsWorld_removeAction(swigCPtr, this, btActionInterface.getCPtr(action), action);
}
