/**
 * @return the {@link Disposable} objects that will be disposed when the {@link #dispose()} method is called.
 */
public Iterable<Disposable> getManagedDisposables() {
    return disposables;
}
