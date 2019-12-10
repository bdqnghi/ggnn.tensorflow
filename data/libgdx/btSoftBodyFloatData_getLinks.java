public SoftBodyLinkData getLinks() {
    long cPtr = SoftbodyJNI.btSoftBodyFloatData_links_get(swigCPtr, this);
    return (cPtr == 0) ? null : new SoftBodyLinkData(cPtr, false);
}
