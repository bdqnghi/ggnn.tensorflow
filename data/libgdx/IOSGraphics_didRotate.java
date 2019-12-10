@Override
public void didRotate(UIInterfaceOrientation orientation) {
    super.didRotate(orientation);
    // get the view size and update graphics
    // FIXME: supporting BOTH (landscape+portrait at same time) is
    // currently not working correctly (needs fix)
    // FIXME screen orientation needs to be stored for
    // Input#getNativeOrientation
    CGSize bounds = app.getBounds(this);
    graphics.width = (int) bounds.getWidth();
    graphics.height = (int) bounds.getHeight();
    graphics.makeCurrent();
    app.listener.resize(graphics.width, graphics.height);
}
