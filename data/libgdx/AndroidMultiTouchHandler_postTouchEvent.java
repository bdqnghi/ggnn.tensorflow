private void postTouchEvent(AndroidInput input, int type, int x, int y, int pointer, int button, long timeStamp) {
    TouchEvent event = input.usedTouchEvents.obtain();
    event.timeStamp = timeStamp;
    event.pointer = pointer;
    event.x = x;
    event.y = y;
    event.type = type;
    event.button = button;
    input.touchEvents.add(event);
}
