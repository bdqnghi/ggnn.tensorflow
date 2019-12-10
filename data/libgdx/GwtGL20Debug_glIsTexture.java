@Override
public boolean glIsTexture(int texture) {
    boolean res = super.glIsTexture(texture);
    checkError();
    return res;
}
