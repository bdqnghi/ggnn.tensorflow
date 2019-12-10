public static String decodeString(String s, boolean useUrlSafeEncoding) {
    return new String(decode(s.toCharArray(), useUrlSafeEncoding ? urlsafeMap.decodingMap : regularMap.decodingMap));
}
