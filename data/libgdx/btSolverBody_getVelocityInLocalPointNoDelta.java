public void getVelocityInLocalPointNoDelta(Vector3 rel_pos, Vector3 velocity) {
    DynamicsJNI.btSolverBody_getVelocityInLocalPointNoDelta(swigCPtr, this, rel_pos, velocity);
}
