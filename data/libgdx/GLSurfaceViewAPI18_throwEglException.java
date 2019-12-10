public static void throwEglException(String function, int error) {
    String message = formatEglError(function, error);
    if (LOG_THREADS) {
        Log.e("EglHelper", "throwEglException tid=" + Thread.currentThread().getId() + " " + message);
    }
    throw new RuntimeException(message);
}
