public void drag(InputEvent event, float x, float y, int pointer) {
    if (x >= 0 && x < scroll.getWidth()) {
        if (y >= scroll.getHeight()) {
            scrollDown.cancel();
            if (!scrollUp.isScheduled()) {
                startTime = System.currentTimeMillis();
                Timer.schedule(scrollUp, tickSecs, tickSecs);
            }
            return;
        } else if (y < 0) {
            scrollUp.cancel();
            if (!scrollDown.isScheduled()) {
                startTime = System.currentTimeMillis();
                Timer.schedule(scrollDown, tickSecs, tickSecs);
            }
            return;
        }
    }
    scrollUp.cancel();
    scrollDown.cancel();
}
