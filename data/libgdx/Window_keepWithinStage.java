void keepWithinStage() {
    if (!keepWithinStage)
        return;
    Stage stage = getStage();
    Camera camera = stage.getCamera();
    if (camera instanceof OrthographicCamera) {
        OrthographicCamera orthographicCamera = (OrthographicCamera) camera;
        float parentWidth = stage.getWidth();
        float parentHeight = stage.getHeight();
        if (getX(Align.right) - camera.position.x > parentWidth / 2 / orthographicCamera.zoom)
            setPosition(camera.position.x + parentWidth / 2 / orthographicCamera.zoom, getY(Align.right), Align.right);
        if (getX(Align.left) - camera.position.x < -parentWidth / 2 / orthographicCamera.zoom)
            setPosition(camera.position.x - parentWidth / 2 / orthographicCamera.zoom, getY(Align.left), Align.left);
        if (getY(Align.top) - camera.position.y > parentHeight / 2 / orthographicCamera.zoom)
            setPosition(getX(Align.top), camera.position.y + parentHeight / 2 / orthographicCamera.zoom, Align.top);
        if (getY(Align.bottom) - camera.position.y < -parentHeight / 2 / orthographicCamera.zoom)
            setPosition(getX(Align.bottom), camera.position.y - parentHeight / 2 / orthographicCamera.zoom, Align.bottom);
    } else if (getParent() == stage.getRoot()) {
        float parentWidth = stage.getWidth();
        float parentHeight = stage.getHeight();
        if (getX() < 0)
            setX(0);
        if (getRight() > parentWidth)
            setX(parentWidth - getWidth());
        if (getY() < 0)
            setY(0);
        if (getTop() > parentHeight)
            setY(parentHeight - getHeight());
    }
}
