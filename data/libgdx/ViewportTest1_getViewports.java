static public Array<Viewport> getViewports(Camera camera) {
    int minWorldWidth = 640;
    int minWorldHeight = 480;
    int maxWorldWidth = 800;
    int maxWorldHeight = 480;
    Array<Viewport> viewports = new Array();
    viewports.add(new StretchViewport(minWorldWidth, minWorldHeight, camera));
    viewports.add(new FillViewport(minWorldWidth, minWorldHeight, camera));
    viewports.add(new FitViewport(minWorldWidth, minWorldHeight, camera));
    viewports.add(new ExtendViewport(minWorldWidth, minWorldHeight, camera));
    viewports.add(new ExtendViewport(minWorldWidth, minWorldHeight, maxWorldWidth, maxWorldHeight, camera));
    viewports.add(new ScreenViewport(camera));
    ScreenViewport screenViewport = new ScreenViewport(camera);
    screenViewport.setUnitsPerPixel(0.75f);
    viewports.add(screenViewport);
    viewports.add(new ScalingViewport(Scaling.none, minWorldWidth, minWorldHeight, camera));
    return viewports;
}
