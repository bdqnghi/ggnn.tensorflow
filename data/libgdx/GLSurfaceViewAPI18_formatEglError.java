public static String formatEglError(String function, int error) {
    return function + " failed: " + getErrorString(error);
}
