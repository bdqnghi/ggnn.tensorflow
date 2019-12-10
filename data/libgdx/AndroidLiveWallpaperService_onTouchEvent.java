@Override
public void onTouchEvent(MotionEvent event) {
    if (linkedEngine == this) {
        app.input.onTouch(null, event);
    }
}
