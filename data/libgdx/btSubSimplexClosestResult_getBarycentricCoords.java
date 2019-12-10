public float[] getBarycentricCoords() {
    return CollisionJNI.btSubSimplexClosestResult_barycentricCoords_get(swigCPtr, this);
}
