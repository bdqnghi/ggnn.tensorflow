/**
 * Returns a Sort instance for convenience. Multiple threads must not use this instance at the same time.
 */
static public Sort instance() {
    if (instance == null)
        instance = new Sort();
    return instance;
}
