public boolean shouldRender() {
    synchronized (this) {
        boolean rq = requestRendering;
        requestRendering = false;
        return rq || isContinuous || Display.isDirty();
    }
}
