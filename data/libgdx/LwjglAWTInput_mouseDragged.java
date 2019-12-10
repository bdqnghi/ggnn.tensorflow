@Override
public void mouseDragged(MouseEvent e) {
    synchronized (this) {
        TouchEvent event = usedTouchEvents.obtain();
        event.pointer = 0;
        event.x = e.getX();
        event.y = e.getY();
        event.type = TouchEvent.TOUCH_DRAGGED;
        event.timeStamp = System.nanoTime();
        touchEvents.add(event);
        deltaX = event.x - touchX;
        deltaY = event.y - touchY;
        touchX = event.x;
        touchY = event.y;
        checkCatched(e);
        lwjglAwtCanvas.graphics.requestRendering();
    }
}
