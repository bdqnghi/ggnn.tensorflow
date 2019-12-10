@Override
public void run() {
    // Ignore changes that result from window resize events
    if (windowHeight != Window.getClientHeight() || windowWidth != Window.getClientWidth()) {
        windowHeight = Window.getClientHeight();
        windowWidth = Window.getClientWidth();
        schedule(resizeCheckDelay);
        return;
    }
    // Look for elements that have new dimensions
    checkWidgetSize();
    // Start checking again
    if (resizeCheckingEnabled) {
        schedule(resizeCheckDelay);
    }
}
