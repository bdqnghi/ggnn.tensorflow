@Override
public void glGenTextures(int n, IntBuffer textures) {
    calls++;
    gl30.glGenTextures(n, textures);
    check();
}
