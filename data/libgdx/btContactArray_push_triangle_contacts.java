public void push_triangle_contacts(GIM_TRIANGLE_CONTACT tricontact, int feature1, int feature2) {
    CollisionJNI.btContactArray_push_triangle_contacts(swigCPtr, this, GIM_TRIANGLE_CONTACT.getCPtr(tricontact), tricontact, feature1, feature2);
}
