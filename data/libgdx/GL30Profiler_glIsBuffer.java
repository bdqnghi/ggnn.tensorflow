@Override
public boolean glIsBuffer(int buffer) {
    calls++;
    boolean result = gl30.glIsBuffer(buffer);
    check();
    return result;
}
