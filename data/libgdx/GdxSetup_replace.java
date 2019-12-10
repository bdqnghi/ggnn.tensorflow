private String replace(String txt, Map<String, String> values) {
    for (String key : values.keySet()) {
        String value = values.get(key);
        txt = txt.replace(key, value);
    }
    return txt;
}
