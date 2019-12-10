private void handleEvent(NativeEvent e) {
    if (e.getType().equals("mousedown")) {
        if (!e.getEventTarget().equals(canvas) || touched[0]) {
            float mouseX = getRelativeX(e, canvas);
            float mouseY = getRelativeY(e, canvas);
            if (mouseX < 0 || mouseX > Gdx.graphics.getWidth() || mouseY < 0 || mouseY > Gdx.graphics.getHeight()) {
                hasFocus = false;
            }
            return;
        }
        hasFocus = true;
        this.justTouched = true;
        this.touched[0] = true;
        this.pressedButtons.add(getButton(e.getButton()));
        this.deltaX[0] = 0;
        this.deltaY[0] = 0;
        if (isCursorCatched()) {
            this.touchX[0] += getMovementXJSNI(e);
            this.touchY[0] += getMovementYJSNI(e);
        } else {
            this.touchX[0] = getRelativeX(e, canvas);
            this.touchY[0] = getRelativeY(e, canvas);
        }
        this.currentEventTimeStamp = TimeUtils.nanoTime();
        if (processor != null)
            processor.touchDown(touchX[0], touchY[0], 0, getButton(e.getButton()));
    }
    if (e.getType().equals("mousemove")) {
        if (isCursorCatched()) {
            this.deltaX[0] = (int) getMovementXJSNI(e);
            this.deltaY[0] = (int) getMovementYJSNI(e);
            this.touchX[0] += getMovementXJSNI(e);
            this.touchY[0] += getMovementYJSNI(e);
        } else {
            this.deltaX[0] = getRelativeX(e, canvas) - touchX[0];
            this.deltaY[0] = getRelativeY(e, canvas) - touchY[0];
            this.touchX[0] = getRelativeX(e, canvas);
            this.touchY[0] = getRelativeY(e, canvas);
        }
        this.currentEventTimeStamp = TimeUtils.nanoTime();
        if (processor != null) {
            if (touched[0])
                processor.touchDragged(touchX[0], touchY[0], 0);
            else
                processor.mouseMoved(touchX[0], touchY[0]);
        }
    }
    if (e.getType().equals("mouseup")) {
        if (!touched[0])
            return;
        this.pressedButtons.remove(getButton(e.getButton()));
        this.touched[0] = pressedButtons.size > 0;
        if (isCursorCatched()) {
            this.deltaX[0] = (int) getMovementXJSNI(e);
            this.deltaY[0] = (int) getMovementYJSNI(e);
            this.touchX[0] += getMovementXJSNI(e);
            this.touchY[0] += getMovementYJSNI(e);
        } else {
            this.deltaX[0] = getRelativeX(e, canvas) - touchX[0];
            this.deltaY[0] = getRelativeY(e, canvas) - touchY[0];
            this.touchX[0] = getRelativeX(e, canvas);
            this.touchY[0] = getRelativeY(e, canvas);
        }
        this.currentEventTimeStamp = TimeUtils.nanoTime();
        this.touched[0] = false;
        if (processor != null)
            processor.touchUp(touchX[0], touchY[0], 0, getButton(e.getButton()));
    }
    if (e.getType().equals(getMouseWheelEvent())) {
        if (processor != null) {
            processor.scrolled((int) getMouseWheelVelocity(e));
        }
        this.currentEventTimeStamp = TimeUtils.nanoTime();
        e.preventDefault();
    }
    if (e.getType().equals("keydown") && hasFocus) {
        // System.out.println("keydown");
        int code = keyForCode(e.getKeyCode());
        if (code == 67) {
            e.preventDefault();
            if (processor != null) {
                processor.keyDown(code);
                processor.keyTyped('\b');
            }
        } else {
            if (!pressedKeys[code]) {
                pressedKeyCount++;
                pressedKeys[code] = true;
                keyJustPressed = true;
                justPressedKeys[code] = true;
                if (processor != null) {
                    processor.keyDown(code);
                }
            }
        }
    }
    if (e.getType().equals("keypress") && hasFocus) {
        // System.out.println("keypress");
        char c = (char) e.getCharCode();
        if (processor != null)
            processor.keyTyped(c);
    }
    if (e.getType().equals("keyup") && hasFocus) {
        // System.out.println("keyup");
        int code = keyForCode(e.getKeyCode());
        if (pressedKeys[code]) {
            pressedKeyCount--;
            pressedKeys[code] = false;
        }
        if (processor != null) {
            processor.keyUp(code);
        }
    }
    if (e.getType().equals("touchstart")) {
        this.justTouched = true;
        JsArray<Touch> touches = e.getChangedTouches();
        for (int i = 0, j = touches.length(); i < j; i++) {
            Touch touch = touches.get(i);
            int real = touch.getIdentifier();
            int touchId;
            touchMap.put(real, touchId = getAvailablePointer());
            touched[touchId] = true;
            touchX[touchId] = getRelativeX(touch, canvas);
            touchY[touchId] = getRelativeY(touch, canvas);
            deltaX[touchId] = 0;
            deltaY[touchId] = 0;
            if (processor != null) {
                processor.touchDown(touchX[touchId], touchY[touchId], touchId, Buttons.LEFT);
            }
        }
        this.currentEventTimeStamp = TimeUtils.nanoTime();
        e.preventDefault();
    }
    if (e.getType().equals("touchmove")) {
        JsArray<Touch> touches = e.getChangedTouches();
        for (int i = 0, j = touches.length(); i < j; i++) {
            Touch touch = touches.get(i);
            int real = touch.getIdentifier();
            int touchId = touchMap.get(real);
            deltaX[touchId] = getRelativeX(touch, canvas) - touchX[touchId];
            deltaY[touchId] = getRelativeY(touch, canvas) - touchY[touchId];
            touchX[touchId] = getRelativeX(touch, canvas);
            touchY[touchId] = getRelativeY(touch, canvas);
            if (processor != null) {
                processor.touchDragged(touchX[touchId], touchY[touchId], touchId);
            }
        }
        this.currentEventTimeStamp = TimeUtils.nanoTime();
        e.preventDefault();
    }
    if (e.getType().equals("touchcancel")) {
        JsArray<Touch> touches = e.getChangedTouches();
        for (int i = 0, j = touches.length(); i < j; i++) {
            Touch touch = touches.get(i);
            int real = touch.getIdentifier();
            int touchId = touchMap.get(real);
            touchMap.remove(real);
            touched[touchId] = false;
            deltaX[touchId] = getRelativeX(touch, canvas) - touchX[touchId];
            deltaY[touchId] = getRelativeY(touch, canvas) - touchY[touchId];
            touchX[touchId] = getRelativeX(touch, canvas);
            touchY[touchId] = getRelativeY(touch, canvas);
            if (processor != null) {
                processor.touchUp(touchX[touchId], touchY[touchId], touchId, Buttons.LEFT);
            }
        }
        this.currentEventTimeStamp = TimeUtils.nanoTime();
        e.preventDefault();
    }
    if (e.getType().equals("touchend")) {
        JsArray<Touch> touches = e.getChangedTouches();
        for (int i = 0, j = touches.length(); i < j; i++) {
            Touch touch = touches.get(i);
            int real = touch.getIdentifier();
            int touchId = touchMap.get(real);
            touchMap.remove(real);
            touched[touchId] = false;
            deltaX[touchId] = getRelativeX(touch, canvas) - touchX[touchId];
            deltaY[touchId] = getRelativeY(touch, canvas) - touchY[touchId];
            touchX[touchId] = getRelativeX(touch, canvas);
            touchY[touchId] = getRelativeY(touch, canvas);
            if (processor != null) {
                processor.touchUp(touchX[touchId], touchY[touchId], touchId, Buttons.LEFT);
            }
        }
        this.currentEventTimeStamp = TimeUtils.nanoTime();
        e.preventDefault();
    }
// if(hasFocus) e.preventDefault();
}
