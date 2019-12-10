@Override
public void init(int n) {
    super.init(n);
    mainShaderProvider = new MainShaderProvider(new MainShader.Config(this));
    if (n == SECOND_PASS)
        init2();
}
