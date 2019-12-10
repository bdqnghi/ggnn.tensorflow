/**
 * Returns our real display dimension based on screen orientation.
 *
 * @param viewController The view controller.
 * @return Or real display dimension.
 */
CGSize getBounds(UIViewController viewController) {
    // or screen size (always portrait)
    CGSize bounds = UIScreen.getMainScreen().getApplicationFrame().getSize();
    // determine orientation and resulting width + height
    UIInterfaceOrientation orientation;
    if (viewController != null) {
        orientation = viewController.getInterfaceOrientation();
    } else if (config.orientationLandscape == config.orientationPortrait) {
        /*
			 * if the app has orientation in any side then we can only check status bar orientation
			 */
        orientation = uiApp.getStatusBarOrientation();
    } else if (config.orientationLandscape) {
        // is landscape true and portrait false
        orientation = UIInterfaceOrientation.LandscapeRight;
    } else {
        // is portrait true and landscape false
        orientation = UIInterfaceOrientation.Portrait;
    }
    int width;
    int height;
    switch(orientation) {
        case LandscapeLeft:
        case LandscapeRight:
            height = (int) bounds.getWidth();
            width = (int) bounds.getHeight();
            if (width < height) {
                width = (int) bounds.getWidth();
                height = (int) bounds.getHeight();
            }
            break;
        default:
            // assume portrait
            width = (int) bounds.getWidth();
            height = (int) bounds.getHeight();
    }
    Gdx.app.debug("IOSApplication", "Unscaled View: " + orientation.toString() + " " + width + "x" + height);
    // update width/height depending on display scaling selected
    width *= displayScaleFactor;
    height *= displayScaleFactor;
    // log screen dimensions
    Gdx.app.debug("IOSApplication", "View: " + orientation.toString() + " " + width + "x" + height);
    // return resulting view size (based on orientation)
    return new CGSize(width, height);
}
