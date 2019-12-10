@Override
public BufferFormat getBufferFormat() {
    return new BufferFormat(8, 8, 8, 0, 16, config.stencil ? 8 : 0, 0, false);
}
