public static String[] tokenizeToStringArray(String str, String delimiters, boolean trimTokens, boolean ignoreEmptyTokens) {
    if (str == null) {
        return null;
    }
    StringTokenizer st = new StringTokenizer(str, delimiters);
    List<String> tokens = new ArrayList<String>();
    while (st.hasMoreTokens()) {
        String token = st.nextToken();
        if (trimTokens) {
            token = token.trim();
        }
        if (!ignoreEmptyTokens || token.length() > 0) {
            tokens.add(token);
        }
    }
    return tokens.toArray(new String[tokens.size()]);
}
