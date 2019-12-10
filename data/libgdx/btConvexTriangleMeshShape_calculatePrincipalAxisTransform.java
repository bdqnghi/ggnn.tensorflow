public void calculatePrincipalAxisTransform(Matrix4 principal, Vector3 inertia, SWIGTYPE_p_float volume) {
    CollisionJNI.btConvexTriangleMeshShape_calculatePrincipalAxisTransform(swigCPtr, this, principal, inertia, SWIGTYPE_p_float.getCPtr(volume));
}
