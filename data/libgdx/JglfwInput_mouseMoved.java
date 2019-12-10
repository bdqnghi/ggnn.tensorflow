public boolean mouseMoved(int screenX, int screenY) {
    deltaX = screenX - mouseX;
    deltaY = screenY - mouseY;
    mouseX = screenX;
    mouseY = screenY;
    app.graphics.requestRendering();
    return processor != null ? processor.mouseMoved(mouseX, mouseY) : false;
}
