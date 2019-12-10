public static String getProperty(String name) {
    if (name.equals("user.home")) {
        return "/";
    }
    return "Unknown property '" + name + "'";
}
