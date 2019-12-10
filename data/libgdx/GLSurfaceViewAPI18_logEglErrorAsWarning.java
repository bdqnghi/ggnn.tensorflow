public static void logEglErrorAsWarning(String tag, String function, int error) {
    Log.w(tag, formatEglError(function, error));
}
