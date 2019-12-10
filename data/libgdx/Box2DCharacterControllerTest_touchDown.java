@Override
public boolean touchDown(int x, int y, int pointerId, int button) {
    cam.unproject(point.set(x, y, 0));
    if (button == Input.Buttons.LEFT) {
        if (last == null) {
            last = new Vector2(point.x, point.y);
        } else {
            createEdge(BodyType.StaticBody, last.x, last.y, point.x, point.y, 0);
            last.set(point.x, point.y);
        }
    } else {
        last = null;
    }
    return false;
}
