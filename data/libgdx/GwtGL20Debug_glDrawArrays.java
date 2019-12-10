@Override
public void glDrawArrays(int mode, int first, int count) {
    super.glDrawArrays(mode, first, count);
    checkError();
}
