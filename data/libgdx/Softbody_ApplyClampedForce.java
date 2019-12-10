public static void ApplyClampedForce(btSoftBody.Node n, Vector3 f, float dt) {
    SoftbodyJNI.ApplyClampedForce(btSoftBody.Node.getCPtr(n), n, f, dt);
}
