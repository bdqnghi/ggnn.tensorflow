@Override
public boolean glIsEnabled(int cap) {
    calls++;
    boolean result = gl20.glIsEnabled(cap);
    check();
    return result;
}
