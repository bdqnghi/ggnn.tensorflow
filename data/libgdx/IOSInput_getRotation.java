@Override
public int getRotation() {
    UIInterfaceOrientation orientation = app.graphics.viewController != null ? app.graphics.viewController.getInterfaceOrientation() : UIApplication.getSharedApplication().getStatusBarOrientation();
    // we measure orientation counter clockwise, just like on Android
    if (orientation == UIInterfaceOrientation.Portrait)
        return 0;
    if (orientation == UIInterfaceOrientation.LandscapeLeft)
        return 270;
    if (orientation == UIInterfaceOrientation.PortraitUpsideDown)
        return 180;
    if (orientation == UIInterfaceOrientation.LandscapeRight)
        return 90;
    return 0;
}
