public boolean touchUp(float x, float y, int pointer, int button) {
    if (pointer > 1)
        return false;
    // check if we are still tapping.
    if (inTapSquare && !isWithinTapSquare(x, y, tapSquareCenterX, tapSquareCenterY))
        inTapSquare = false;
    boolean wasPanning = panning;
    panning = false;
    longPressTask.cancel();
    if (longPressFired)
        return false;
    if (inTapSquare) {
        // handle taps
        if (lastTapButton != button || lastTapPointer != pointer || TimeUtils.nanoTime() - lastTapTime > tapCountInterval || !isWithinTapSquare(x, y, lastTapX, lastTapY))
            tapCount = 0;
        tapCount++;
        lastTapTime = TimeUtils.nanoTime();
        lastTapX = x;
        lastTapY = y;
        lastTapButton = button;
        lastTapPointer = pointer;
        gestureStartTime = 0;
        return listener.tap(x, y, tapCount, button);
    }
    if (pinching) {
        // handle pinch end
        pinching = false;
        panning = true;
        // we are in pan mode again, reset velocity tracker
        if (pointer == 0) {
            // first pointer has lifted off, set up panning to use the second pointer...
            tracker.start(pointer2.x, pointer2.y, Gdx.input.getCurrentEventTime());
        } else {
            // second pointer has lifted off, set up panning to use the first pointer...
            tracker.start(pointer1.x, pointer1.y, Gdx.input.getCurrentEventTime());
        }
        return false;
    }
    // handle no longer panning
    boolean handled = false;
    if (wasPanning && !panning)
        handled = listener.panStop(x, y, pointer, button);
    // handle fling
    gestureStartTime = 0;
    long time = Gdx.input.getCurrentEventTime();
    if (time - tracker.lastTime < maxFlingDelay) {
        tracker.update(x, y, time);
        handled = listener.fling(tracker.getVelocityX(), tracker.getVelocityY(), button) || handled;
    }
    return handled;
}
