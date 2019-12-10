@Override
public void keyTyped(java.awt.event.KeyEvent e) {
    synchronized (this) {
        KeyEvent event = usedKeyEvents.obtain();
        event.keyChar = e.getKeyChar();
        event.keyCode = 0;
        event.type = KeyEvent.KEY_TYPED;
        event.timeStamp = System.nanoTime();
        keyEvents.add(event);
        lwjglAwtCanvas.graphics.requestRendering();
    }
}
