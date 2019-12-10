@Override
public boolean touchDragged(int x, int y, int pointer) {
    if (pointer != 0)
        return false;
    delta.set(x, y).sub(last);
    if (mode == TransformMode.Rotate) {
        point.set(cam.position).sub(lookAt);
        if (tmpV.set(point).nor().dot(yAxis) < 0.9999f) {
            xAxis.set(cam.direction).crs(yAxis).nor();
            rotMatrix.setToRotation(xAxis, delta.y / 5);
            point.mul(rotMatrix);
        }
        rotMatrix.setToRotation(yAxis, -delta.x / 5);
        point.mul(rotMatrix);
        cam.position.set(point.add(lookAt));
        cam.lookAt(lookAt.x, lookAt.y, lookAt.z);
    }
    if (mode == TransformMode.Zoom) {
        cam.fieldOfView -= -delta.y / 10;
    }
    if (mode == TransformMode.Translate) {
        tCurr.set(x, y);
        translated = true;
    }
    cam.update();
    last.set(x, y);
    return true;
}
