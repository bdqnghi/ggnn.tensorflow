@Override
public void glGenSamplers(int count, IntBuffer samplers) {
    calls++;
    gl30.glGenSamplers(count, samplers);
    check();
}
