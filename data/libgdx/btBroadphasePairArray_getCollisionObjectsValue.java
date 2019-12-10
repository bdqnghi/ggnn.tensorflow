public int getCollisionObjectsValue(int[] result, int max, int other) {
    return CollisionJNI.btBroadphasePairArray_getCollisionObjectsValue(swigCPtr, this, result, max, other);
}
