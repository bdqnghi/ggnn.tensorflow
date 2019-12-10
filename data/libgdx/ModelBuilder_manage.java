/**
 * Add the {@link Disposable} object to the model, causing it to be disposed when the model is disposed.
 */
public void manage(final Disposable disposable) {
    if (model == null)
        throw new GdxRuntimeException("Call begin() first");
    model.manageDisposable(disposable);
}
