private void logAction(int action) {
    String actionStr = "";
    if (action == MotionEvent.ACTION_HOVER_ENTER)
        actionStr = "HOVER_ENTER";
    else if (action == MotionEvent.ACTION_HOVER_MOVE)
        actionStr = "HOVER_MOVE";
    else if (action == MotionEvent.ACTION_HOVER_EXIT)
        actionStr = "HOVER_EXIT";
    else if (action == MotionEvent.ACTION_SCROLL)
        actionStr = "SCROLL";
    else
        actionStr = "UNKNOWN (" + action + ")";
    Gdx.app.log("AndroidMouseHandler", "action " + actionStr);
}
