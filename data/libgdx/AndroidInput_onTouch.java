@Override
public boolean onTouch(View view, MotionEvent event) {
    if (requestFocus && view != null) {
        view.setFocusableInTouchMode(true);
        view.requestFocus();
        requestFocus = false;
    }
    // synchronized in handler.postTouchEvent()
    touchHandler.onTouch(event, this);
    if (sleepTime != 0) {
        try {
            Thread.sleep(sleepTime);
        } catch (InterruptedException e) {
        }
    }
    return true;
}
