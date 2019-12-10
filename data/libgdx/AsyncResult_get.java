/**
 * @return waits if necessary for the computation to complete and then returns the result
 * @throws GdxRuntimeException if there was an error
 */
public T get() {
    try {
        return future.get();
    } catch (InterruptedException ex) {
        return null;
    } catch (ExecutionException ex) {
        throw new GdxRuntimeException(ex.getCause());
    }
}
