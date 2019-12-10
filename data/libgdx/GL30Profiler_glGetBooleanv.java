@Override
public void glGetBooleanv(int pname, Buffer params) {
    calls++;
    gl30.glGetBooleanv(pname, params);
    check();
}
