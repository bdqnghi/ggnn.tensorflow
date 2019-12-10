public boolean mouseMoved(InputEvent event, float x, float y) {
    // These come from Actor#parentToLocalCoordinates.
    testX = x;
    testY = y;
    return true;
}
