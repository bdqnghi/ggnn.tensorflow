private void check(String text, Object object) {
    Object object2 = json.fromJson(object.getClass(), text);
    equals(object, object2);
}
