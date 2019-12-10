@Override
public void glDeleteSamplers(int count, IntBuffer samplers) {
    calls++;
    gl30.glDeleteSamplers(count, samplers);
    check();
}
