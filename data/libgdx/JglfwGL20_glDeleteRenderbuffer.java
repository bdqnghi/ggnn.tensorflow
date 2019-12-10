public void glDeleteRenderbuffer(int renderbuffer) {
    glDeleteRenderbuffers(1, toIntBuffer(renderbuffer));
}
