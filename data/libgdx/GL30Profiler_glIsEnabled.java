@Override
public boolean glIsEnabled(int cap) {
    calls++;
    boolean result = gl30.glIsEnabled(cap);
    check();
    return result;
}
