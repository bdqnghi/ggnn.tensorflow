public void push_contact(Vector3 point, Vector3 normal, float depth, int feature1, int feature2) {
    CollisionJNI.btContactArray_push_contact(swigCPtr, this, point, normal, depth, feature1, feature2);
}
