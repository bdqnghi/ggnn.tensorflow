@Override
public void glGetShaderiv(int shader, int pname, IntBuffer params) {
    if (pname == GL20.GL_COMPILE_STATUS || pname == GL20.GL_DELETE_STATUS) {
        boolean result = gl.getShaderParameterb(shaders.get(shader), pname);
        params.put(result ? GL20.GL_TRUE : GL20.GL_FALSE);
    } else {
        int result = gl.getShaderParameteri(shaders.get(shader), pname);
        params.put(result);
    }
}
