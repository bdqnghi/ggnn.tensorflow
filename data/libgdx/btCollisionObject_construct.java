@Override
protected void construct() {
    super.construct();
    gdxBridge = new GdxCollisionObjectBridge();
    internalSetGdxBridge(gdxBridge);
    addInstance(this);
}
