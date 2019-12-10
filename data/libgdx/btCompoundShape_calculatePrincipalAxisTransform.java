public void calculatePrincipalAxisTransform(java.nio.FloatBuffer masses, Matrix4 principal, Vector3 inertia) {
    assert masses.isDirect() : "Buffer must be allocated direct.";
    {
        CollisionJNI.btCompoundShape_calculatePrincipalAxisTransform(swigCPtr, this, masses, principal, inertia);
    }
}
