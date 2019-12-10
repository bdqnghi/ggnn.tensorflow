@Override
public void glFramebufferTexture2D(int target, int attachment, int textarget, int texture, int level) {
    super.glFramebufferTexture2D(target, attachment, textarget, texture, level);
    checkError();
}
