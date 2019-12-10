@Override
public boolean glIsBuffer(int buffer) {
    return gl.isBuffer(buffers.get(buffer));
}
