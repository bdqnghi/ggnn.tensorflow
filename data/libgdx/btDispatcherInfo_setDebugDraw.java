public void setDebugDraw(btIDebugDraw value) {
    CollisionJNI.btDispatcherInfo_debugDraw_set(swigCPtr, this, btIDebugDraw.getCPtr(value), value);
}
