/**
 * Adds a {@link Disposable} to be managed and disposed by this Model. Can be used to keep track of manually loaded textures
 * for {@link ModelInstance}.
 * @param disposable the Disposable
 */
public void manageDisposable(Disposable disposable) {
    if (!disposables.contains(disposable, true))
        disposables.add(disposable);
}
