private void touch(int x, int y) {
    t = paths.get(currentPath).locate(tmpV.set(x, Gdx.graphics.getHeight() - y));
    paths.get(currentPath).valueAt(tmpV, t);
    obj.setPosition(tmpV.x, tmpV.y);
    wait = 0.2f;
}
