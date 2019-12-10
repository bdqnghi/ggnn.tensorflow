private String readResourceAsString(File file) {
    try {
        return new String(readResource(file), "UTF-8");
    } catch (UnsupportedEncodingException e) {
        throw new RuntimeException(e);
    }
}
