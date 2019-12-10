@Override
public void dispose() {
    if (motionState != null)
        motionState.release();
    motionState = null;
    if (collisionShape != null)
        collisionShape.release();
    collisionShape = null;
    super.dispose();
}
