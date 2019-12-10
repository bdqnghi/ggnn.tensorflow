@Override
public String glGetString(int name) {
    calls++;
    String result = gl20.glGetString(name);
    check();
    return result;
}
