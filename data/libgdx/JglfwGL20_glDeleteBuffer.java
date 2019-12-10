public void glDeleteBuffer(int buffer) {
    glDeleteBuffers(1, toIntBuffer(buffer));
}
