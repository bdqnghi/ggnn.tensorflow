public void touchUp(InputEvent event, float x, float y, int pointer, int button) {
    if (pointer == pressedPointer) {
        if (dragging)
            dragStop(event, x, y, pointer);
        cancel();
    }
}
