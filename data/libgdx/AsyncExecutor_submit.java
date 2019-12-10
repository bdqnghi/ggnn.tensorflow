/**
 * Submits a {@link Runnable} to be executed asynchronously. If maxConcurrent runnables are already running, the runnable will
 * be queued.
 * @param task the task to execute asynchronously
 */
public <T> AsyncResult<T> submit(final AsyncTask<T> task) {
    if (executor.isShutdown()) {
        throw new GdxRuntimeException("Cannot run tasks on an executor that has been shutdown (disposed)");
    }
    return new AsyncResult(executor.submit(new Callable<T>() {

        @Override
        public T call() throws Exception {
            return task.call();
        }
    }));
}
