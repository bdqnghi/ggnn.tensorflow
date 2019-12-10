public void getClosestPointsNonVirtual(btDiscreteCollisionDetectorInterface.ClosestPointInput input, btDiscreteCollisionDetectorInterface.Result output, btIDebugDraw debugDraw) {
    CollisionJNI.btGjkPairDetector_getClosestPointsNonVirtual(swigCPtr, this, btDiscreteCollisionDetectorInterface.ClosestPointInput.getCPtr(input), input, btDiscreteCollisionDetectorInterface.Result.getCPtr(output), output, btIDebugDraw.getCPtr(debugDraw), debugDraw);
}
