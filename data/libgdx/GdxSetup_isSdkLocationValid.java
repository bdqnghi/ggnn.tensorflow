public static boolean isSdkLocationValid(String sdkLocation) {
    return new File(sdkLocation, "tools").exists() && new File(sdkLocation, "platforms").exists();
}
