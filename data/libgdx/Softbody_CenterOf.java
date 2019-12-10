public static Vector3 CenterOf(btSoftBody.Face f) {
    return SoftbodyJNI.CenterOf(btSoftBody.Face.getCPtr(f), f);
}
