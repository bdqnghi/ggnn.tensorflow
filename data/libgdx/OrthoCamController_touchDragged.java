@Override
public boolean touchDragged(int x, int y, int pointer) {
    camera.unproject(curr.set(x, y, 0));
    if (!(last.x == -1 && last.y == -1 && last.z == -1)) {
        camera.unproject(delta.set(last.x, last.y, 0));
        delta.sub(curr);
        camera.position.add(delta.x, delta.y, 0);
    }
    last.set(x, y, 0);
    return false;
}
