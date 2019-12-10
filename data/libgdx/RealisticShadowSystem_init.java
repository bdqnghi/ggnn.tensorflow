@Override
public void init() {
    super.init();
    mainShaderProvider = new MainShaderProvider(new MainShader.Config(this));
}
