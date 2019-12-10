public String toString(String enc) throws UnsupportedEncodingException {
    return new String(buf, 0, count, enc);
}
