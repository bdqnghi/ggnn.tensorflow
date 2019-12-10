public btVector3 getClosestPointOnSimplex() {
    long cPtr = CollisionJNI.btSubSimplexClosestResult_closestPointOnSimplex_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3(cPtr, false);
}
