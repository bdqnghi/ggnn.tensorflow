@Override
public void glGetRenderbufferParameteriv(int target, int pname, IntBuffer params) {
    calls++;
    gl20.glGetRenderbufferParameteriv(target, pname, params);
    check();
}
