@Override
public void glShaderBinary(int n, IntBuffer shaders, int binaryformat, Buffer binary, int length) {
    calls++;
    gl20.glShaderBinary(n, shaders, binaryformat, binary, length);
    check();
}
