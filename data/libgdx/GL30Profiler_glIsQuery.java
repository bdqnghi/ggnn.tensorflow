@Override
public boolean glIsQuery(int id) {
    calls++;
    final boolean result = gl30.glIsQuery(id);
    check();
    return result;
}
