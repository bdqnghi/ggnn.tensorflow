public boolean collide(Vector3 sphereCenter, Vector3 point, Vector3 resultNormal, SWIGTYPE_p_float depth, SWIGTYPE_p_float timeOfImpact, float contactBreakingThreshold) {
    return CollisionJNI.SphereTriangleDetector_collide(swigCPtr, this, sphereCenter, point, resultNormal, SWIGTYPE_p_float.getCPtr(depth), SWIGTYPE_p_float.getCPtr(timeOfImpact), contactBreakingThreshold);
}
