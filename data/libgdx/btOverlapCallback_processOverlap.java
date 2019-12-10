public boolean processOverlap(btBroadphasePair pair) {
    return CollisionJNI.btOverlapCallback_processOverlap(swigCPtr, this, pair);
}
