private int findPointer(UITouch touch) {
    long ptr = touch.getHandle();
    for (int i = 0; i < touchDown.length; i++) {
        if (touchDown[i] == ptr)
            return i;
    }
    throw new GdxRuntimeException("Couldn't find pointer id for touch event!");
}
