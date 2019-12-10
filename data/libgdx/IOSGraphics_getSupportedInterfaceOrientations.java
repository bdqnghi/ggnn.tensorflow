@Override
public UIInterfaceOrientationMask getSupportedInterfaceOrientations() {
    long mask = 0;
    if (app.config.orientationLandscape) {
        mask |= ((1 << UIInterfaceOrientation.LandscapeLeft.value()) | (1 << UIInterfaceOrientation.LandscapeRight.value()));
    }
    if (app.config.orientationPortrait) {
        mask |= ((1 << UIInterfaceOrientation.Portrait.value()) | (1 << UIInterfaceOrientation.PortraitUpsideDown.value()));
    }
    return new UIInterfaceOrientationMask(mask);
}
