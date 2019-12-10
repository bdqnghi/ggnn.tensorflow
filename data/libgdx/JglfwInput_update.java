public void update() {
    deltaX = 0;
    deltaY = 0;
    justTouched = false;
    if (keyJustPressed) {
        keyJustPressed = false;
        for (int i = 0; i < justPressedKeys.length; i++) {
            justPressedKeys[i] = false;
        }
    }
    if (processorQueue != null)
        // Main loop is handled elsewhere and events are queued.
        processorQueue.drain();
    else {
        currentEventTime = System.nanoTime();
        // Use GLFW main loop to process events.
        glfwPollEvents();
    }
}
