@Override
public boolean glIsBuffer(int buffer) {
    boolean res = super.glIsBuffer(buffer);
    checkError();
    return res;
}
