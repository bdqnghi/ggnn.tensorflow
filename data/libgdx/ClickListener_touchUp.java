public void touchUp(InputEvent event, float x, float y, int pointer, int button) {
    if (pointer == pressedPointer) {
        if (!cancelled) {
            boolean touchUpOver = isOver(event.getListenerActor(), x, y);
            // Ignore touch up if the wrong mouse button.
            if (touchUpOver && pointer == 0 && this.button != -1 && button != this.button)
                touchUpOver = false;
            if (touchUpOver) {
                long time = TimeUtils.nanoTime();
                if (time - lastTapTime > tapCountInterval)
                    tapCount = 0;
                tapCount++;
                lastTapTime = time;
                clicked(event, x, y);
            }
        }
        pressed = false;
        pressedPointer = -1;
        pressedButton = -1;
        cancelled = false;
    }
}
