@Override
public void requestRendering() {
    isFrameRequested = true;
    // (we should already be started in continuous mode)
    if (!isContinuous)
        viewController.setPaused(false);
}
