@Override
public void glGetBufferParameteri64v(int target, int pname, LongBuffer params) {
    params.put(GL32.glGetBufferParameteri64(target, pname));
}
