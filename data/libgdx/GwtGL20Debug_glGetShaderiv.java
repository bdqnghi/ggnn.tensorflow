@Override
public void glGetShaderiv(int shader, int pname, IntBuffer params) {
    super.glGetShaderiv(shader, pname, params);
    checkError();
}
