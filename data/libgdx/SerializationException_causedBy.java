private boolean causedBy(Throwable ex, Class type) {
    Throwable cause = ex.getCause();
    if (cause == null || cause == ex)
        return false;
    if (type.isAssignableFrom(cause.getClass()))
        return true;
    return causedBy(cause, type);
}
