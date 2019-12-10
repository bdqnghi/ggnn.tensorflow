/**
 * Waits for running {@link AsyncTask} instances to finish, then destroys any resources like threads. Can not be used after
 * this method is called.
 */
@Override
public void dispose() {
    executor.shutdown();
    try {
        executor.awaitTermination(Long.MAX_VALUE, TimeUnit.SECONDS);
    } catch (InterruptedException e) {
        throw new GdxRuntimeException("Couldn't shutdown loading thread", e);
    }
}
