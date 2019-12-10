@Override
public Buffer glGetBufferPointerv(int target, int pname) {
    calls++;
    final Buffer result = gl30.glGetBufferPointerv(target, pname);
    check();
    return result;
}
