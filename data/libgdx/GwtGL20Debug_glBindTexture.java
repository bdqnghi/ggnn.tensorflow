@Override
public void glBindTexture(int target, int texture) {
    super.glBindTexture(target, texture);
    checkError();
}
