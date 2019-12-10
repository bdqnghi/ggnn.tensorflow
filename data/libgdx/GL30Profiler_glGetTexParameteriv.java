@Override
public void glGetTexParameteriv(int target, int pname, IntBuffer params) {
    calls++;
    gl30.glGetTexParameteriv(target, pname, params);
    check();
}
