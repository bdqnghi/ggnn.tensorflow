@Override
public void glTexParameteriv(int target, int pname, IntBuffer params) {
    gl.texParameterf(target, pname, params.get());
}
