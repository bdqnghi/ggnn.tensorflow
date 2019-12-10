public void collide(btDispatcher dispatcher) {
    CollisionJNI.btDbvtBroadphase_collide(swigCPtr, this, btDispatcher.getCPtr(dispatcher), dispatcher);
}
