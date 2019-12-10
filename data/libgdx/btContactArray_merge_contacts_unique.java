public void merge_contacts_unique(btContactArray contacts) {
    CollisionJNI.btContactArray_merge_contacts_unique(swigCPtr, this, btContactArray.getCPtr(contacts), contacts);
}
