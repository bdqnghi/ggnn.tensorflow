@Override
public boolean glIsEnabled(int cap) {
    boolean res = super.glIsEnabled(cap);
    checkError();
    return res;
}
