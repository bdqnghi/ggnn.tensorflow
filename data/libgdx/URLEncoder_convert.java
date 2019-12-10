private static void convert(String s, StringBuilder buf, String enc) throws UnsupportedEncodingException {
    byte[] bytes = s.getBytes(enc);
    for (int j = 0; j < bytes.length; j++) {
        buf.append('%');
        buf.append(digits.charAt((bytes[j] & 0xf0) >> 4));
        buf.append(digits.charAt(bytes[j] & 0xf));
    }
}
