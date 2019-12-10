public btDbvtNode insert(btDbvtAabbMm box, long data) {
    long cPtr = CollisionJNI.btDbvt_insert(swigCPtr, this, btDbvtAabbMm.getCPtr(box), box, data);
    return (cPtr == 0) ? null : new btDbvtNode(cPtr, false);
}
