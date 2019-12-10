@Override
public void glPixelStorei(int pname, int param) {
    super.glPixelStorei(pname, param);
    checkError();
}
