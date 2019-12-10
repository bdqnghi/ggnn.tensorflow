@Override
public void glGetBufferParameteriv(int target, int pname, IntBuffer params) {
    calls++;
    gl20.glGetBufferParameteriv(target, pname, params);
    check();
}
