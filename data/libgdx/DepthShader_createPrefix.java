public static String createPrefix(final Renderable renderable, final Config config) {
    String prefix = DefaultShader.createPrefix(renderable, config);
    if (!config.depthBufferOnly)
        prefix += "#define PackedDepthFlag\n";
    return prefix;
}
