private static String encode(String content, String encoding) {
    try {
        return URLEncoder.encode(content, encoding);
    } catch (UnsupportedEncodingException e) {
        throw new IllegalArgumentException(e);
    }
}
