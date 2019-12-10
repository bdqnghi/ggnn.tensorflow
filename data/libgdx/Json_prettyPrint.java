public String prettyPrint(String json, PrettyPrintSettings settings) {
    return new JsonReader().parse(json).prettyPrint(settings);
}
