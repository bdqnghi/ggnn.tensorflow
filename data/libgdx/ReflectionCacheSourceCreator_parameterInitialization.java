private void parameterInitialization() {
    p("private static final Parameter[] EMPTY_PARAMETERS = new Parameter[0];");
    for (Map.Entry<String, String> e : parameterName2ParameterInstantiation.entrySet()) {
        p("private static Parameter " + e.getKey() + ";");
        p("private static Parameter " + e.getKey() + "() {");
        p("    if (" + e.getKey() + " != null) return " + e.getKey() + ";");
        p("    return " + e.getKey() + " = " + e.getValue() + ";");
        p("}");
    }
}
