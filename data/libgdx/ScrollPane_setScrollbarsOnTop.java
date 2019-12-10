/**
 * When false (the default), the widget is clipped so it is not drawn under the scrollbars. When true, the widget is clipped
 * to the entire scroll pane bounds and the scrollbars are drawn on top of the widget. If {@link #setFadeScrollBars(boolean)}
 * is true, the scroll bars are always drawn on top.
 */
public void setScrollbarsOnTop(boolean scrollbarsOnTop) {
    this.scrollbarsOnTop = scrollbarsOnTop;
    invalidate();
}
