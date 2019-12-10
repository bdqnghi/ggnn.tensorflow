public btSimulationIslandManager getSimulationIslandManager() {
    long cPtr = DynamicsJNI.btDiscreteDynamicsWorld_getSimulationIslandManager__SWIG_0(swigCPtr, this);
    return (cPtr == 0) ? null : new btSimulationIslandManager(cPtr, false);
}
