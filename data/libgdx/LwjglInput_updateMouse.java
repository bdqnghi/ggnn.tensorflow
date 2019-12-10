void updateMouse() {
    justTouched = false;
    if (Mouse.isCreated()) {
        int events = 0;
        while (Mouse.next()) {
            events++;
            int x = (int) (Mouse.getEventX() * Display.getPixelScaleFactor());
            int y = Gdx.graphics.getHeight() - (int) (Mouse.getEventY() * Display.getPixelScaleFactor()) - 1;
            int button = Mouse.getEventButton();
            int gdxButton = toGdxButton(button);
            // Ignore unknown button.
            if (button != -1 && gdxButton == -1)
                continue;
            TouchEvent event = usedTouchEvents.obtain();
            event.x = x;
            event.y = y;
            event.button = gdxButton;
            event.pointer = 0;
            event.timeStamp = Mouse.getEventNanoseconds();
            // could be drag, scroll or move
            if (button == -1) {
                if (Mouse.getEventDWheel() != 0) {
                    event.type = TouchEvent.TOUCH_SCROLLED;
                    event.scrollAmount = (int) -Math.signum(Mouse.getEventDWheel());
                } else if (pressedButtons.size > 0) {
                    event.type = TouchEvent.TOUCH_DRAGGED;
                } else {
                    event.type = TouchEvent.TOUCH_MOVED;
                }
            } else {
                // nope, it's a down or up event.
                if (Mouse.getEventButtonState()) {
                    event.type = TouchEvent.TOUCH_DOWN;
                    pressedButtons.add(event.button);
                    justTouched = true;
                } else {
                    event.type = TouchEvent.TOUCH_UP;
                    pressedButtons.remove(event.button);
                }
            }
            touchEvents.add(event);
            mouseX = event.x;
            mouseY = event.y;
            deltaX = (int) (Mouse.getEventDX() * Display.getPixelScaleFactor());
            deltaY = (int) (Mouse.getEventDY() * Display.getPixelScaleFactor());
        }
        if (events == 0) {
            deltaX = 0;
            deltaY = 0;
        } else {
            Gdx.graphics.requestRendering();
        }
    }
}
