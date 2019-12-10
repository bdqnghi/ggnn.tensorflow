public boolean revert() {
    if (config.vertexShader == null || config.fragmentShader == null)
        return false;
    config.vertexShader = null;
    config.fragmentShader = null;
    clear();
    return true;
}
