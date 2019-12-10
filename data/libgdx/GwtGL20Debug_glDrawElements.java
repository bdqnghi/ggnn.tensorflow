@Override
public void glDrawElements(int mode, int count, int type, int indices) {
    super.glDrawElements(mode, count, type, indices);
    checkError();
}
