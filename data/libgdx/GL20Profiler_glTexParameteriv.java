@Override
public void glTexParameteriv(int target, int pname, IntBuffer params) {
    calls++;
    gl20.glTexParameteriv(target, pname, params);
    check();
}
