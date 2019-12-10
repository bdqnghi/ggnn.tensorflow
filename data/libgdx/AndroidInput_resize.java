private boolean[] resize(boolean[] orig) {
    boolean[] tmp = new boolean[orig.length + 2];
    System.arraycopy(orig, 0, tmp, 0, orig.length);
    return tmp;
}
