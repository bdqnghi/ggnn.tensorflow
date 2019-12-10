public int getKerning(char ch) {
    if (kerning != null) {
        byte[] page = kerning[ch >>> LOG2_PAGE_SIZE];
        if (page != null)
            return page[ch & PAGE_SIZE - 1];
    }
    return 0;
}
