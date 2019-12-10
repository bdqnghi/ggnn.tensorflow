public boolean zoom(float amount) {
    if (!alwaysScroll && activateKey != 0 && !activatePressed)
        return false;
    camera.translate(tmpV1.set(camera.direction).scl(amount));
    if (scrollTarget)
        target.add(tmpV1);
    if (autoUpdate)
        camera.update();
    return true;
}
