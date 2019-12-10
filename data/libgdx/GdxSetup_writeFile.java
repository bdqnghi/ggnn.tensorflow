private void writeFile(File outFile, String text) {
    try {
        writeFile(outFile, text.getBytes("UTF-8"));
    } catch (UnsupportedEncodingException e) {
        throw new RuntimeException(e);
    }
}
