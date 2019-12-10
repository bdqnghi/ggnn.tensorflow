@Override
public void mouseReleased(MouseEvent e) {
    synchronized (this) {
        TouchEvent event = usedTouchEvents.obtain();
        event.pointer = 0;
        event.x = e.getX();
        event.y = e.getY();
        event.button = toGdxButton(e.getButton());
        event.type = TouchEvent.TOUCH_UP;
        event.timeStamp = System.nanoTime();
        touchEvents.add(event);
        deltaX = event.x - touchX;
        deltaY = event.y - touchY;
        touchX = event.x;
        touchY = event.y;
        pressedButtons.remove(event.button);
        if (pressedButtons.size == 0)
            touchDown = false;
        lwjglAwtCanvas.graphics.requestRendering();
    }
}
