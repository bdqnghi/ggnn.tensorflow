public static int identityHashCode(Object o) {
    return (o == null) ? 0 : (!(o instanceof String)) ? Impl.getHashCode(o) : String.HashCache.getHashCode((String) o);
}
