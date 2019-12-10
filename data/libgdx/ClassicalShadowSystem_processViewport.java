@Override
protected void processViewport(LightProperties lp, boolean cameraViewport) {
    if (this.currentPass != SECOND_PASS)
        super.processViewport(lp, cameraViewport);
}
