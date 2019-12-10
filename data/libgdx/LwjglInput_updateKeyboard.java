void updateKeyboard() {
    if (keyJustPressed) {
        keyJustPressed = false;
        for (int i = 0; i < justPressedKeys.length; i++) {
            justPressedKeys[i] = false;
        }
    }
    if (lastKeyCharPressed != 0) {
        keyRepeatTimer -= deltaTime;
        if (keyRepeatTimer < 0) {
            keyRepeatTimer = keyRepeatTime;
            KeyEvent event = usedKeyEvents.obtain();
            event.keyCode = 0;
            event.keyChar = lastKeyCharPressed;
            event.type = KeyEvent.KEY_TYPED;
            // FIXME this should use the repeat time plus the timestamp of the original
            event.timeStamp = System.nanoTime();
            keyEvents.add(event);
            Gdx.graphics.requestRendering();
        }
    }
    if (Keyboard.isCreated()) {
        while (Keyboard.next()) {
            if (Keyboard.getEventKeyState()) {
                int keyCode = getGdxKeyCode(Keyboard.getEventKey());
                char keyChar = Keyboard.getEventCharacter();
                long timeStamp = Keyboard.getEventNanoseconds();
                switch(keyCode) {
                    case Keys.DEL:
                        keyChar = 8;
                        break;
                    case Keys.FORWARD_DEL:
                        keyChar = 127;
                        break;
                }
                KeyEvent event = usedKeyEvents.obtain();
                event.keyCode = keyCode;
                event.keyChar = 0;
                event.type = KeyEvent.KEY_DOWN;
                event.timeStamp = timeStamp;
                keyEvents.add(event);
                event = usedKeyEvents.obtain();
                event.keyCode = 0;
                event.keyChar = keyChar;
                event.type = KeyEvent.KEY_TYPED;
                event.timeStamp = timeStamp;
                keyEvents.add(event);
                pressedKeys++;
                keyJustPressed = true;
                justPressedKeys[keyCode] = true;
                lastKeyCharPressed = keyChar;
                keyRepeatTimer = keyRepeatInitialTime;
            } else {
                int keyCode = LwjglInput.getGdxKeyCode(Keyboard.getEventKey());
                KeyEvent event = usedKeyEvents.obtain();
                event.keyCode = keyCode;
                event.keyChar = 0;
                event.type = KeyEvent.KEY_UP;
                event.timeStamp = Keyboard.getEventNanoseconds();
                keyEvents.add(event);
                pressedKeys--;
                lastKeyCharPressed = 0;
            }
            Gdx.graphics.requestRendering();
        }
    }
}
