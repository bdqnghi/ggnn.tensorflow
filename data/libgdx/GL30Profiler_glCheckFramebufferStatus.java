@Override
public int glCheckFramebufferStatus(int target) {
    calls++;
    int result = gl30.glCheckFramebufferStatus(target);
    check();
    return result;
}
