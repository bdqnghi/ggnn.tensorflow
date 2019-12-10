private void postTouchEvent(AndroidInput input, int type, int x, int y, int scrollAmount, long timeStamp) {
    TouchEvent event = input.usedTouchEvents.obtain();
    event.timeStamp = timeStamp;
    event.x = x;
    event.y = y;
    event.type = type;
    event.scrollAmount = scrollAmount;
    input.touchEvents.add(event);
}
