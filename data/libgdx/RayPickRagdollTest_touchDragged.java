@Override
public boolean touchDragged(int screenX, int screenY, int pointer) {
    boolean result = false;
    if (pickConstraint != null) {
        Ray ray = camera.getPickRay(screenX, screenY);
        tmpV1.set(ray.direction).scl(pickDistance).add(camera.position);
        pickConstraint.setPivotB(tmpV1);
        result = true;
    }
    return result ? result : super.touchDragged(screenX, screenY, pointer);
}
