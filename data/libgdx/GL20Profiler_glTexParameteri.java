@Override
public void glTexParameteri(int target, int pname, int param) {
    calls++;
    gl20.glTexParameteri(target, pname, param);
    check();
}
