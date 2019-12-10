/**
 * For dynamic bodies this method is called by bullet every update to inform about the new position and rotation.
 */
@Override
public void setWorldTransform(final Matrix4 worldTrans) {
    transform.set(worldTrans);
}
