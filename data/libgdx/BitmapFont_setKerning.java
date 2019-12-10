public void setKerning(int ch, int value) {
    if (kerning == null)
        kerning = new byte[PAGES][];
    byte[] page = kerning[ch >>> LOG2_PAGE_SIZE];
    if (page == null)
        kerning[ch >>> LOG2_PAGE_SIZE] = page = new byte[PAGE_SIZE];
    page[ch & PAGE_SIZE - 1] = (byte) value;
}
