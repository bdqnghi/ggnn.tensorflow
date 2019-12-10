protected EGLConfigChooser getEglConfigChooser() {
    return new GdxEglConfigChooser(config.r, config.g, config.b, config.a, config.depth, config.stencil, config.numSamples);
}
