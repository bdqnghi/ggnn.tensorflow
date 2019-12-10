@Override
public void glGetShaderiv(int shader, int pname, IntBuffer params) {
    calls++;
    gl30.glGetShaderiv(shader, pname, params);
    check();
}
