private void logAction(int action, int pointer) {
    String actionStr = "";
    if (action == MotionEvent.ACTION_DOWN)
        actionStr = "DOWN";
    else if (action == MotionEvent.ACTION_POINTER_DOWN)
        actionStr = "POINTER DOWN";
    else if (action == MotionEvent.ACTION_UP)
        actionStr = "UP";
    else if (action == MotionEvent.ACTION_POINTER_UP)
        actionStr = "POINTER UP";
    else if (action == MotionEvent.ACTION_OUTSIDE)
        actionStr = "OUTSIDE";
    else if (action == MotionEvent.ACTION_CANCEL)
        actionStr = "CANCEL";
    else if (action == MotionEvent.ACTION_MOVE)
        actionStr = "MOVE";
    else
        actionStr = "UNKNOWN (" + action + ")";
    Gdx.app.log("AndroidMultiTouchHandler", "action " + actionStr + ", Android pointer id: " + pointer);
}
