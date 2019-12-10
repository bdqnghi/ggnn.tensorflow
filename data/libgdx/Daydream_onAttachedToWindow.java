@Override
public void onAttachedToWindow() {
    super.onAttachedToWindow();
    Log.i("Andrew", "hi");
    AndroidApplicationConfiguration cfg = new AndroidApplicationConfiguration();
    setInteractive(false);
    ApplicationListener app = new MeshShaderTest();
    initialize(app, cfg);
}
