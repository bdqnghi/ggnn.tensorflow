/**
 * Begin applying multiple animations to the instance, must followed by one or more calls to {
 * {@link #apply(Animation, float, float)} and finally {{@link #end()}.
 */
protected void begin() {
    if (applying)
        throw new GdxRuntimeException("You must call end() after each call to being()");
    applying = true;
}
