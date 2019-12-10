@Override
public void glTexParameterf(int target, int pname, float param) {
    super.glTexParameterf(target, pname, param);
    checkError();
}
