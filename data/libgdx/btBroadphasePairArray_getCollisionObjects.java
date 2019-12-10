public int getCollisionObjects(int[] result, int max, int other) {
    return CollisionJNI.btBroadphasePairArray_getCollisionObjects(swigCPtr, this, result, max, other);
}
