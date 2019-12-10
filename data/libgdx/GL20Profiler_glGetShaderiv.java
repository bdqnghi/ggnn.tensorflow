@Override
public void glGetShaderiv(int shader, int pname, IntBuffer params) {
    calls++;
    gl20.glGetShaderiv(shader, pname, params);
    check();
}
