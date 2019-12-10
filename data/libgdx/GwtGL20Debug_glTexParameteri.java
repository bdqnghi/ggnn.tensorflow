@Override
public void glTexParameteri(int target, int pname, int param) {
    super.glTexParameteri(target, pname, param);
    checkError();
}
