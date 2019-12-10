/**
 * For flick scroll, sets the overscroll distance in pixels and the speed it returns to the widget's bounds in seconds.
 * Default is 50, 30, 200.
 */
public void setupOverscroll(float distance, float speedMin, float speedMax) {
    overscrollDistance = distance;
    overscrollSpeedMin = speedMin;
    overscrollSpeedMax = speedMax;
}
