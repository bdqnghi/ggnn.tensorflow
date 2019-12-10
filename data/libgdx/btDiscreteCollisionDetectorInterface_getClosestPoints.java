public void getClosestPoints(btDiscreteCollisionDetectorInterface.ClosestPointInput input, btDiscreteCollisionDetectorInterface.Result output, btIDebugDraw debugDraw) {
    CollisionJNI.btDiscreteCollisionDetectorInterface_getClosestPoints__SWIG_1(swigCPtr, this, btDiscreteCollisionDetectorInterface.ClosestPointInput.getCPtr(input), input, btDiscreteCollisionDetectorInterface.Result.getCPtr(output), output, btIDebugDraw.getCPtr(debugDraw), debugDraw);
}
