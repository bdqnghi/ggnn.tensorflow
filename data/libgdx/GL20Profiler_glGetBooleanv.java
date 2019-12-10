@Override
public void glGetBooleanv(int pname, Buffer params) {
    calls++;
    gl20.glGetBooleanv(pname, params);
    check();
}
