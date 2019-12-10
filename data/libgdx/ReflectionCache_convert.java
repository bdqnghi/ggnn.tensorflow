private static String convert(String className) {
    if (className.startsWith("[")) {
        int dimensions = 0;
        char c = className.charAt(0);
        String suffix = "";
        while (c == '[') {
            dimensions++;
            suffix += "[]";
            c = className.charAt(dimensions);
        }
        char t = className.charAt(dimensions);
        switch(t) {
            case 'Z':
                return "boolean" + suffix;
            case 'B':
                return "byte" + suffix;
            case 'C':
                return "char" + suffix;
            case 'L':
                return className.substring(dimensions + 1, className.length() - 1).replace('$', '.') + suffix;
            case 'D':
                return "double" + suffix;
            case 'F':
                return "float" + suffix;
            case 'I':
                return "int" + suffix;
            case 'J':
                return "long" + suffix;
            case 'S':
                return "short" + suffix;
            default:
                throw new IllegalArgumentException("Couldn't transform '" + className + "' to qualified source name");
        }
    } else {
        return className.replace('$', '.');
    }
}
