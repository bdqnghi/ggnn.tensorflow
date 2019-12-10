@Override
public boolean touchUp(int x, int y, int pointer, int button) {
    // if a mouse joint exists we simply destroy it
    if (mouseJoint != null) {
        world.destroyJoint(mouseJoint);
        mouseJoint = null;
    }
    return false;
}
