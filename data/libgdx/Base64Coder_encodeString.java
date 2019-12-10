public static String encodeString(String s, boolean useUrlsafeEncoding) {
    return new String(encode(s.getBytes(), useUrlsafeEncoding ? urlsafeMap.encodingMap : regularMap.encodingMap));
}
