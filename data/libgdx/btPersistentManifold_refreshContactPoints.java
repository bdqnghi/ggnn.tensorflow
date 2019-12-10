public void refreshContactPoints(Matrix4 trA, Matrix4 trB) {
    CollisionJNI.btPersistentManifold_refreshContactPoints(swigCPtr, this, trA, trB);
}
