public void project(Matrix4 trans, Vector3 dir, SWIGTYPE_p_float minProj, SWIGTYPE_p_float maxProj, Vector3 witnesPtMin, Vector3 witnesPtMax) {
    CollisionJNI.btConvexPolyhedron_project(swigCPtr, this, trans, dir, SWIGTYPE_p_float.getCPtr(minProj), SWIGTYPE_p_float.getCPtr(maxProj), witnesPtMin, witnesPtMax);
}
