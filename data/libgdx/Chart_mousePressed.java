public void mousePressed(MouseEvent event) {
    movingIndex = overIndex;
    moveAll = event.isControlDown();
    if (moveAll) {
        moveAllProportionally = event.isShiftDown();
        moveAllPrevY = event.getY();
    }
}
