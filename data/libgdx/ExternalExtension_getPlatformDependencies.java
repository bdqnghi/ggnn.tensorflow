private String[] getPlatformDependencies(String platformName) {
    if (dependencies.get(platformName) == null) {
        return null;
    } else if (dependencies.get(platformName) != null && dependencies.get(platformName).size() == 0) {
        return new String[] {};
    } else {
        String[] arr = new String[dependencies.get(platformName).size()];
        for (int i = 0; i < dependencies.get(platformName).size(); i++) {
            String dependencyString = dependencies.get(platformName).get(i);
            if (dependencyString.split(":").length == 3) {
                String[] split = dependencyString.split(":");
                arr[i] = split[0] + ":" + split[1] + ":" + version + ":" + split[2];
            } else {
                arr[i] = dependencyString + ":" + version;
            }
        }
        return arr;
    }
}
