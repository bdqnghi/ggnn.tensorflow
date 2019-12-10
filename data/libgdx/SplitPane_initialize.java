private void initialize() {
    addListener(new InputListener() {

        int draggingPointer = -1;

        public boolean touchDown(InputEvent event, float x, float y, int pointer, int button) {
            if (draggingPointer != -1)
                return false;
            if (pointer == 0 && button != 0)
                return false;
            if (handleBounds.contains(x, y)) {
                draggingPointer = pointer;
                lastPoint.set(x, y);
                handlePosition.set(handleBounds.x, handleBounds.y);
                return true;
            }
            return false;
        }

        public void touchUp(InputEvent event, float x, float y, int pointer, int button) {
            if (pointer == draggingPointer)
                draggingPointer = -1;
        }

        public void touchDragged(InputEvent event, float x, float y, int pointer) {
            if (pointer != draggingPointer)
                return;
            Drawable handle = style.handle;
            if (!vertical) {
                float delta = x - lastPoint.x;
                float availWidth = getWidth() - handle.getMinWidth();
                float dragX = handlePosition.x + delta;
                handlePosition.x = dragX;
                dragX = Math.max(0, dragX);
                dragX = Math.min(availWidth, dragX);
                splitAmount = dragX / availWidth;
                if (splitAmount < minAmount)
                    splitAmount = minAmount;
                if (splitAmount > maxAmount)
                    splitAmount = maxAmount;
                lastPoint.set(x, y);
            } else {
                float delta = y - lastPoint.y;
                float availHeight = getHeight() - handle.getMinHeight();
                float dragY = handlePosition.y + delta;
                handlePosition.y = dragY;
                dragY = Math.max(0, dragY);
                dragY = Math.min(availHeight, dragY);
                splitAmount = 1 - (dragY / availHeight);
                if (splitAmount < minAmount)
                    splitAmount = minAmount;
                if (splitAmount > maxAmount)
                    splitAmount = maxAmount;
                lastPoint.set(x, y);
            }
            invalidate();
        }
    });
}
