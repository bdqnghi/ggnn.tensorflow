public void projection_interval(Vector3 direction, SWIGTYPE_p_float vmin, SWIGTYPE_p_float vmax) {
    CollisionJNI.btAABB_projection_interval(swigCPtr, this, direction, SWIGTYPE_p_float.getCPtr(vmin), SWIGTYPE_p_float.getCPtr(vmax));
}
