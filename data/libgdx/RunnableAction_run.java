/**
 * Called to run the runnable.
 */
public void run() {
    Pool pool = getPool();
    // Ensure this action can't be returned to the pool inside the runnable.
    setPool(null);
    try {
        runnable.run();
    } finally {
        setPool(pool);
    }
}
