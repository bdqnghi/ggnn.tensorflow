public boolean touchDown(int x, int y, int pointer, int newParam) {
    Vector3 touchPoint = new Vector3(x, y, 0);
    worldCamera.unproject(touchPoint);
    effect.setPosition(touchPoint.x, touchPoint.y);
    return false;
}
