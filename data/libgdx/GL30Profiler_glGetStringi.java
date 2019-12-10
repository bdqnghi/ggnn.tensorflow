@Override
public String glGetStringi(int name, int index) {
    calls++;
    final String result = gl30.glGetStringi(name, index);
    check();
    return result;
}
