public static String createPrefix(final Renderable renderable, final Config config) {
    String prefix = DefaultShader.createPrefix(renderable, config);
    boolean dir = (config.shadowSystem.getCurrentLight() instanceof DirectionalLight);
    if (dir)
        prefix += "#define directionalLight\n";
    else
        prefix += "#define spotLight\n";
    return prefix;
}
