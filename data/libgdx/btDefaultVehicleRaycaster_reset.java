@Override
protected void reset(long cPtr, boolean cMemoryOwn) {
    if (!destroyed)
        destroy();
    super.reset(DynamicsJNI.btDefaultVehicleRaycaster_SWIGUpcast(swigCPtr = cPtr), cMemoryOwn);
}
