@Override
public void glFramebufferTextureLayer(int target, int attachment, int texture, int level, int layer) {
    calls++;
    gl30.glFramebufferTextureLayer(target, attachment, texture, level, layer);
    check();
}
