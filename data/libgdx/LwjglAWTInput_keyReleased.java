@Override
public void keyReleased(java.awt.event.KeyEvent e) {
    synchronized (this) {
        KeyEvent event = usedKeyEvents.obtain();
        event.keyChar = 0;
        event.keyCode = translateKeyCode(e.getKeyCode());
        event.type = KeyEvent.KEY_UP;
        event.timeStamp = System.nanoTime();
        keyEvents.add(event);
        if (keys[event.keyCode]) {
            keyCount--;
            keys[event.keyCode] = false;
        }
        lwjglAwtCanvas.graphics.requestRendering();
    }
}
