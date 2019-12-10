public void setManifoldPtr(btPersistentManifold value) {
    CollisionJNI.btConvexTriangleCallback_manifoldPtr_set(swigCPtr, this, btPersistentManifold.getCPtr(value), value);
}
