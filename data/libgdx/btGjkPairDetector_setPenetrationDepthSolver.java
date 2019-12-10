public void setPenetrationDepthSolver(btConvexPenetrationDepthSolver penetrationDepthSolver) {
    CollisionJNI.btGjkPairDetector_setPenetrationDepthSolver(swigCPtr, this, btConvexPenetrationDepthSolver.getCPtr(penetrationDepthSolver), penetrationDepthSolver);
}
