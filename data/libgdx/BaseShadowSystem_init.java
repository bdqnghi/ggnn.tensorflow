/**
 * Initialize framebuffers and shader providers. You should call super.init() in subclass.
 */
@Override
public void init() {
    frameBuffers = new FrameBuffer[getPassQuantity()];
    passShaderProviders = new ShaderProvider[getPassQuantity()];
    for (int i = 0; i < getPassQuantity(); i++) {
        init(i);
    }
}
