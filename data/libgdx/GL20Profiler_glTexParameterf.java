@Override
public void glTexParameterf(int target, int pname, float param) {
    calls++;
    gl20.glTexParameterf(target, pname, param);
    check();
}
