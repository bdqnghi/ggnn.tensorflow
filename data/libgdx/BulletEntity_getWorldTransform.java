/**
 * For dynamic and static bodies this method is called by bullet once to get the initial state of the body. For kinematic
 * bodies this method is called on every update, unless the body is deactivated.
 */
@Override
public void getWorldTransform(final Matrix4 worldTrans) {
    worldTrans.set(transform);
}
