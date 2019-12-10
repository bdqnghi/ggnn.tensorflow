protected String entity(String name) {
    if (name.equals("lt"))
        return "<";
    if (name.equals("gt"))
        return ">";
    if (name.equals("amp"))
        return "&";
    if (name.equals("apos"))
        return "'";
    if (name.equals("quot"))
        return "\"";
    if (name.startsWith("#x"))
        return Character.toString((char) Integer.parseInt(name.substring(2), 16));
    return null;
}
