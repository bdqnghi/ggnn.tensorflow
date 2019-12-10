public void setClosestPointOnSimplex(btVector3 value) {
    CollisionJNI.btSubSimplexClosestResult_closestPointOnSimplex_set(swigCPtr, this, btVector3.getCPtr(value), value);
}
