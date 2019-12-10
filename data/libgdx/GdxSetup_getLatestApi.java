private static int getLatestApi(File apis) {
    int apiLevel = 0;
    for (File api : apis.listFiles()) {
        int level = readAPIVersion(api);
        if (level > apiLevel)
            apiLevel = level;
    }
    return apiLevel;
}
