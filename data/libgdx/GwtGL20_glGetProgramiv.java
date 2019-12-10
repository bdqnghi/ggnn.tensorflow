@Override
public void glGetProgramiv(int program, int pname, IntBuffer params) {
    if (pname == GL20.GL_DELETE_STATUS || pname == GL20.GL_LINK_STATUS || pname == GL20.GL_VALIDATE_STATUS) {
        boolean result = gl.getProgramParameterb(programs.get(program), pname);
        params.put(result ? GL20.GL_TRUE : GL20.GL_FALSE);
    } else {
        params.put(gl.getProgramParameteri(programs.get(program), pname));
    }
}
