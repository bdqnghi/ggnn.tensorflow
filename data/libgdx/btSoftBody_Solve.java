public void Solve(float dt, float sor) {
    SoftbodyJNI.btSoftBody_Joint_Solve(swigCPtr, this, dt, sor);
}
