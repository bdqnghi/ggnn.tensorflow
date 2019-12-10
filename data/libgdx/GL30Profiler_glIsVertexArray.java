@Override
public boolean glIsVertexArray(int array) {
    calls++;
    final boolean result = gl30.glIsVertexArray(array);
    check();
    return result;
}
