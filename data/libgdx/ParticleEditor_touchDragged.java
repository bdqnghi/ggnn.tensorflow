public boolean touchDragged(int x, int y, int pointer) {
    Vector3 touchPoint = new Vector3(x, y, 0);
    worldCamera.unproject(touchPoint);
    effect.setPosition(touchPoint.x, touchPoint.y);
    return false;
}
