public void setFlickScroll(boolean flickScroll) {
    if (this.flickScroll == flickScroll)
        return;
    this.flickScroll = flickScroll;
    if (flickScroll)
        addListener(flickScrollListener);
    else
        removeListener(flickScrollListener);
    invalidate();
}
