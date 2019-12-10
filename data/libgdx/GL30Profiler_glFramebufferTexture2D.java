@Override
public void glFramebufferTexture2D(int target, int attachment, int textarget, int texture, int level) {
    calls++;
    gl30.glFramebufferTexture2D(target, attachment, textarget, texture, level);
    check();
}
