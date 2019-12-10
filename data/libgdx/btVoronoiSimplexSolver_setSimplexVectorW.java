public void setSimplexVectorW(btVector3 value) {
    CollisionJNI.btVoronoiSimplexSolver_simplexVectorW_set(swigCPtr, this, btVector3.getCPtr(value), value);
}
