@Override
protected void init1() {
    super.init1();
    passShaderProviders[FIRST_PASS] = new Pass1ShaderProvider();
}
