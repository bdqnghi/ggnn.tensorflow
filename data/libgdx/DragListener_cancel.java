/* If a drag is in progress, no further drag methods will be called until a new drag is started. */
public void cancel() {
    dragging = false;
    pressedPointer = -1;
}
