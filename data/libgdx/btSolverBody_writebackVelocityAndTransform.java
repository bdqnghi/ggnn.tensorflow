public void writebackVelocityAndTransform(float timeStep, float splitImpulseTurnErp) {
    DynamicsJNI.btSolverBody_writebackVelocityAndTransform(swigCPtr, this, timeStep, splitImpulseTurnErp);
}
