@Override
public String glGetString(int name) {
    calls++;
    String result = gl30.glGetString(name);
    check();
    return result;
}
