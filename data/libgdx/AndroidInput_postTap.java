protected void postTap(int x, int y) {
    synchronized (this) {
        TouchEvent event = usedTouchEvents.obtain();
        event.timeStamp = System.nanoTime();
        event.pointer = 0;
        event.x = x;
        event.y = y;
        event.type = TouchEvent.TOUCH_DOWN;
        touchEvents.add(event);
        event = usedTouchEvents.obtain();
        event.timeStamp = System.nanoTime();
        event.pointer = 0;
        event.x = x;
        event.y = y;
        event.type = TouchEvent.TOUCH_UP;
        touchEvents.add(event);
    }
    Gdx.app.getGraphics().requestRendering();
}
