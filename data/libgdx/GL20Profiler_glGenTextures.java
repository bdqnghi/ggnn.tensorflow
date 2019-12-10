@Override
public void glGenTextures(int n, IntBuffer textures) {
    calls++;
    gl20.glGenTextures(n, textures);
    check();
}
