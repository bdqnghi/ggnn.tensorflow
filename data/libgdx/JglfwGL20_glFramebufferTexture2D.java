public void glFramebufferTexture2D(int target, int attachment, int textarget, int texture, int level) {
    GL.glFramebufferTexture2DEXT(target, attachment, textarget, texture, level);
}
