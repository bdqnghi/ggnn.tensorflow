private static Map<String, String> parseArgs(String[] args) {
    if (args.length % 2 != 0) {
        printHelp();
        System.exit(-1);
    }
    Map<String, String> params = new HashMap<String, String>();
    for (int i = 0; i < args.length; i += 2) {
        String param = args[i].replace("--", "");
        String value = args[i + 1];
        params.put(param, value);
    }
    return params;
}
