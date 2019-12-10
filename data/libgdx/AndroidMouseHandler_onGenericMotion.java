public boolean onGenericMotion(MotionEvent event, AndroidInput input) {
    if ((event.getSource() & InputDevice.SOURCE_CLASS_POINTER) == 0)
        return false;
    final int action = event.getAction() & MotionEvent.ACTION_MASK;
    int x = 0, y = 0;
    int scrollAmount = 0;
    long timeStamp = System.nanoTime();
    synchronized (input) {
        switch(action) {
            case MotionEvent.ACTION_HOVER_MOVE:
                x = (int) event.getX();
                y = (int) event.getY();
                if ((x != deltaX) || (y != deltaY)) {
                    // Avoid garbage events
                    postTouchEvent(input, TouchEvent.TOUCH_MOVED, x, y, 0, timeStamp);
                    deltaX = x;
                    deltaY = y;
                }
                break;
            case MotionEvent.ACTION_SCROLL:
                scrollAmount = (int) -Math.signum(event.getAxisValue(MotionEvent.AXIS_VSCROLL));
                postTouchEvent(input, TouchEvent.TOUCH_SCROLLED, 0, 0, scrollAmount, timeStamp);
        }
    }
    Gdx.app.getGraphics().requestRendering();
    return true;
}
