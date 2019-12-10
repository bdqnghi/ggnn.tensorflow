static public Array<String> getViewportNames() {
    Array<String> names = new Array();
    names.add("StretchViewport");
    names.add("FillViewport");
    names.add("FitViewport");
    names.add("ExtendViewport: no max");
    names.add("ExtendViewport: max");
    names.add("ScreenViewport: 1:1");
    names.add("ScreenViewport: 0.75:1");
    names.add("ScalingViewport: none");
    return names;
}
