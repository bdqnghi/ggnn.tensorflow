@Override
public void glGetTexParameteriv(int target, int pname, IntBuffer params) {
    calls++;
    gl20.glGetTexParameteriv(target, pname, params);
    check();
}
