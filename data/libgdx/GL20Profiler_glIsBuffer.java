@Override
public boolean glIsBuffer(int buffer) {
    calls++;
    boolean result = gl20.glIsBuffer(buffer);
    check();
    return result;
}
