@Override
public void glGetQueryiv(int target, int pname, IntBuffer params) {
    calls++;
    gl30.glGetQueryiv(target, pname, params);
    check();
}
