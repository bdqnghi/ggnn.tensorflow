/**
 * Returns the exception that was raised if an error occurred while attempting to load the class. Otherwise, returns
 * <tt>null</tt>.
 *
 * <p>
 * This method predates the general-purpose exception chaining facility. The {@link Throwable#getCause()} method is now the
 * preferred means of obtaining this information.
 *
 * @return the <code>Exception</code> that was raised while loading a class
 * @since 1.2
 */
public Throwable getException() {
    return ex;
}
