@Override
public void glTexParameteri(int target, int pname, int param) {
    calls++;
    gl30.glTexParameteri(target, pname, param);
    check();
}
