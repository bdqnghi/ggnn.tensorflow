@Override
public boolean touchDragged(int x, int y, int pointer) {
    // mouse coordinates
    if (mouseJoint != null) {
        camera.unproject(testPoint.set(x, y, 0));
        mouseJoint.setTarget(target.set(testPoint.x, testPoint.y));
    }
    return false;
}
