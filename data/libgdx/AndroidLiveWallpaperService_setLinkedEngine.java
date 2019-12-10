protected void setLinkedEngine(AndroidWallpaperEngine linkedEngine) {
    synchronized (sync) {
        this.linkedEngine = linkedEngine;
    }
}
