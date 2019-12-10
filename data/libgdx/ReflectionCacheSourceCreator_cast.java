private String cast(String paramType, String arg) {
    if (paramType.equals("byte") || paramType.equals("short") || paramType.equals("int") || paramType.equals("long") || paramType.equals("float") || paramType.equals("double")) {
        return "((Number)" + arg + ")." + paramType + "Value()";
    } else if (paramType.equals("boolean")) {
        return "((Boolean)" + arg + ")." + paramType + "Value()";
    } else if (paramType.equals("char")) {
        return "((Character)" + arg + ")." + paramType + "Value()";
    } else {
        return "((" + paramType + ")" + arg + ")";
    }
}
