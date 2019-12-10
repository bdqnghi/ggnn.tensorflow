@Override
public int glCheckFramebufferStatus(int target) {
    calls++;
    int result = gl20.glCheckFramebufferStatus(target);
    check();
    return result;
}
