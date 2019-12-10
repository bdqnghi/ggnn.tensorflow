public void onError(int error) {
    throw new GdxRuntimeException("GLProfiler: Got GL error " + resolveErrorNumber(error));
}
