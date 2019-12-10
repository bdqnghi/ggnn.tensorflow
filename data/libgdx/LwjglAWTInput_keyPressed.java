@Override
public void keyPressed(java.awt.event.KeyEvent e) {
    synchronized (this) {
        KeyEvent event = usedKeyEvents.obtain();
        event.keyChar = 0;
        event.keyCode = translateKeyCode(e.getKeyCode());
        event.type = KeyEvent.KEY_DOWN;
        event.timeStamp = System.nanoTime();
        keyEvents.add(event);
        if (!keys[event.keyCode]) {
            keyCount++;
            keys[event.keyCode] = true;
        }
        lwjglAwtCanvas.graphics.requestRendering();
    }
}
