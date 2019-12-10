public void setShader(String name) {
    shaderProvider.error = false;
    if (name.equals("<default>")) {
        shaderProvider.config.vertexShader = null;
        shaderProvider.config.fragmentShader = null;
        shaderProvider.name = "default";
    } else {
        ShaderLoader loader = new ShaderLoader(shaderRoot);
        shaderProvider.config.vertexShader = loader.load(name + ".glsl:VS");
        shaderProvider.config.fragmentShader = loader.load(name + ".glsl:FS");
        shaderProvider.name = name;
    }
    shaderProvider.clear();
}
