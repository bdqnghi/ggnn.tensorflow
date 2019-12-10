public void onInternalTick(btDynamicsWorld dynamicsWorld, float timeStep) {
    if (getClass() == InternalTickCallback.class)
        DynamicsJNI.InternalTickCallback_onInternalTick(swigCPtr, this, btDynamicsWorld.getCPtr(dynamicsWorld), dynamicsWorld, timeStep);
    else
        DynamicsJNI.InternalTickCallback_onInternalTickSwigExplicitInternalTickCallback(swigCPtr, this, btDynamicsWorld.getCPtr(dynamicsWorld), dynamicsWorld, timeStep);
}
