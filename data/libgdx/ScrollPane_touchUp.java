public void touchUp(InputEvent event, float x, float y, int pointer, int button) {
    if (pointer != draggingPointer)
        return;
    cancel();
}
