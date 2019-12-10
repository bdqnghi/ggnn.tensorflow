@Override
public void glGetBufferParameteriv(int target, int pname, IntBuffer params) {
    calls++;
    gl30.glGetBufferParameteriv(target, pname, params);
    check();
}
