protected boolean process(float deltaX, float deltaY, int button) {
    if (button == rotateButton) {
        tmpV1.set(camera.direction).crs(camera.up).y = 0f;
        camera.rotateAround(target, tmpV1.nor(), deltaY * rotateAngle);
        camera.rotateAround(target, Vector3.Y, deltaX * -rotateAngle);
    } else if (button == translateButton) {
        camera.translate(tmpV1.set(camera.direction).crs(camera.up).nor().scl(-deltaX * translateUnits));
        camera.translate(tmpV2.set(camera.up).scl(-deltaY * translateUnits));
        if (translateTarget)
            target.add(tmpV1).add(tmpV2);
    } else if (button == forwardButton) {
        camera.translate(tmpV1.set(camera.direction).scl(deltaY * translateUnits));
        if (forwardTarget)
            target.add(tmpV1);
    }
    if (autoUpdate)
        camera.update();
    return true;
}
