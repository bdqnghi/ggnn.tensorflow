/**
 * Cancels the stage's touch focus for all listeners except this scroll pane's flick scroll listener. This causes any widgets
 * inside the scrollpane that have received touchDown to receive touchUp.
 * @see #setCancelTouchFocus(boolean)
 */
public void cancelTouchFocus() {
    Stage stage = getStage();
    if (stage != null)
        stage.cancelTouchFocusExcept(flickScrollListener, this);
}
