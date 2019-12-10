/**
 * If currently scrolling by tracking a touch down, stop scrolling.
 */
public void cancel() {
    draggingPointer = -1;
    touchScrollH = false;
    touchScrollV = false;
    flickScrollListener.getGestureDetector().cancel();
}
