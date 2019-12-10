@Override
public void dispose() {
    if (swigCPtr != 0)
        removeInstance(this);
    if (gdxBridge != null)
        gdxBridge.dispose();
    gdxBridge = null;
    if (collisionShape != null)
        collisionShape.release();
    collisionShape = null;
    super.dispose();
}
