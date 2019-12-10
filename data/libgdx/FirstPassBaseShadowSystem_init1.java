protected void init1() {
    frameBuffers[FIRST_PASS] = new FrameBuffer(Pixmap.Format.RGBA8888, allocator.getWidth(), allocator.getHeight(), true);
}
