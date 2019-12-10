public boolean touchDragged(int screenX, int screenY, int pointer) {
    deltaX = screenX - mouseX;
    deltaY = screenY - mouseY;
    mouseX = screenX;
    mouseY = screenY;
    app.graphics.requestRendering();
    return processor != null ? processor.touchDragged(mouseX, mouseY, 0) : false;
}
