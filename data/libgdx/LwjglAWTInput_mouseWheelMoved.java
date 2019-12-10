@Override
public void mouseWheelMoved(MouseWheelEvent e) {
    synchronized (this) {
        TouchEvent event = usedTouchEvents.obtain();
        event.pointer = 0;
        event.type = TouchEvent.TOUCH_SCROLLED;
        event.scrollAmount = e.getWheelRotation();
        event.timeStamp = System.nanoTime();
        touchEvents.add(event);
        lwjglAwtCanvas.graphics.requestRendering();
    }
}
