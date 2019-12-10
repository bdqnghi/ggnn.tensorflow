@Override
public void glGetBufferParameteri64v(int target, int pname, LongBuffer params) {
    calls++;
    gl30.glGetBufferParameteri64v(target, pname, params);
    check();
}
