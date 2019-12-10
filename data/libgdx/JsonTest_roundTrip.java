private String roundTrip(Object object) {
    String text = json.toJson(object);
    System.out.println(text);
    test(text, object);
    text = json.prettyPrint(object, 130);
    test(text, object);
    return text;
}
