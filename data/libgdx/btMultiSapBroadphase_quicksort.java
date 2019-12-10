public void quicksort(btBroadphasePairArray a, int lo, int hi) {
    CollisionJNI.btMultiSapBroadphase_quicksort(swigCPtr, this, btBroadphasePairArray.getCPtr(a), a, lo, hi);
}
