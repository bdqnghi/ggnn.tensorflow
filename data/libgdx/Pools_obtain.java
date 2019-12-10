/**
 * Obtains an object from the {@link #get(Class) pool}.
 */
static public <T> T obtain(Class<T> type) {
    return get(type).obtain();
}
