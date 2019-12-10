public void onTouch(MotionEvent event, AndroidInput input) {
    final int action = event.getAction() & MotionEvent.ACTION_MASK;
    int pointerIndex = (event.getAction() & MotionEvent.ACTION_POINTER_INDEX_MASK) >> MotionEvent.ACTION_POINTER_INDEX_SHIFT;
    int pointerId = event.getPointerId(pointerIndex);
    int x = 0, y = 0;
    int realPointerIndex = 0;
    int button = Buttons.LEFT;
    long timeStamp = System.nanoTime();
    synchronized (input) {
        switch(action) {
            case MotionEvent.ACTION_DOWN:
            case MotionEvent.ACTION_POINTER_DOWN:
                // get a free pointer index as reported by Input.getX() etc.
                realPointerIndex = input.getFreePointerIndex();
                if (realPointerIndex >= AndroidInput.NUM_TOUCHES)
                    break;
                input.realId[realPointerIndex] = pointerId;
                x = (int) event.getX(pointerIndex);
                y = (int) event.getY(pointerIndex);
                if (android.os.Build.VERSION.SDK_INT >= 14)
                    button = toGdxButton(event.getButtonState());
                if (button != -1)
                    postTouchEvent(input, TouchEvent.TOUCH_DOWN, x, y, realPointerIndex, button, timeStamp);
                input.touchX[realPointerIndex] = x;
                input.touchY[realPointerIndex] = y;
                input.deltaX[realPointerIndex] = 0;
                input.deltaY[realPointerIndex] = 0;
                input.touched[realPointerIndex] = (button != -1);
                input.button[realPointerIndex] = button;
                break;
            case MotionEvent.ACTION_UP:
            case MotionEvent.ACTION_POINTER_UP:
            case MotionEvent.ACTION_OUTSIDE:
            case MotionEvent.ACTION_CANCEL:
                realPointerIndex = input.lookUpPointerIndex(pointerId);
                if (realPointerIndex == -1)
                    break;
                if (realPointerIndex >= AndroidInput.NUM_TOUCHES)
                    break;
                input.realId[realPointerIndex] = -1;
                x = (int) event.getX(pointerIndex);
                y = (int) event.getY(pointerIndex);
                button = input.button[realPointerIndex];
                if (button != -1)
                    postTouchEvent(input, TouchEvent.TOUCH_UP, x, y, realPointerIndex, button, timeStamp);
                input.touchX[realPointerIndex] = x;
                input.touchY[realPointerIndex] = y;
                input.deltaX[realPointerIndex] = 0;
                input.deltaY[realPointerIndex] = 0;
                input.touched[realPointerIndex] = false;
                input.button[realPointerIndex] = 0;
                break;
            case MotionEvent.ACTION_MOVE:
                int pointerCount = event.getPointerCount();
                for (int i = 0; i < pointerCount; i++) {
                    pointerIndex = i;
                    pointerId = event.getPointerId(pointerIndex);
                    x = (int) event.getX(pointerIndex);
                    y = (int) event.getY(pointerIndex);
                    realPointerIndex = input.lookUpPointerIndex(pointerId);
                    if (realPointerIndex == -1)
                        continue;
                    if (realPointerIndex >= AndroidInput.NUM_TOUCHES)
                        break;
                    button = input.button[realPointerIndex];
                    if (button != -1)
                        postTouchEvent(input, TouchEvent.TOUCH_DRAGGED, x, y, realPointerIndex, button, timeStamp);
                    else
                        postTouchEvent(input, TouchEvent.TOUCH_MOVED, x, y, realPointerIndex, 0, timeStamp);
                    input.deltaX[realPointerIndex] = x - input.touchX[realPointerIndex];
                    input.deltaY[realPointerIndex] = y - input.touchY[realPointerIndex];
                    input.touchX[realPointerIndex] = x;
                    input.touchY[realPointerIndex] = y;
                }
                break;
        }
    }
    Gdx.app.getGraphics().requestRendering();
}
