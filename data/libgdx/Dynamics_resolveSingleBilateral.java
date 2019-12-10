public static void resolveSingleBilateral(btRigidBody body1, Vector3 pos1, btRigidBody body2, Vector3 pos2, float distance, Vector3 normal, SWIGTYPE_p_float impulse, float timeStep) {
    DynamicsJNI.resolveSingleBilateral(btRigidBody.getCPtr(body1), body1, pos1, btRigidBody.getCPtr(body2), body2, pos2, distance, normal, SWIGTYPE_p_float.getCPtr(impulse), timeStep);
}
