public void update() {
    if (rotateRightPressed || rotateLeftPressed || forwardPressed || backwardPressed) {
        final float delta = Gdx.graphics.getDeltaTime();
        if (rotateRightPressed)
            camera.rotate(camera.up, -delta * rotateAngle);
        if (rotateLeftPressed)
            camera.rotate(camera.up, delta * rotateAngle);
        if (forwardPressed) {
            camera.translate(tmpV1.set(camera.direction).scl(delta * translateUnits));
            if (forwardTarget)
                target.add(tmpV1);
        }
        if (backwardPressed) {
            camera.translate(tmpV1.set(camera.direction).scl(-delta * translateUnits));
            if (forwardTarget)
                target.add(tmpV1);
        }
        if (autoUpdate)
            camera.update();
    }
}
