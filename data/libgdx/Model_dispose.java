@Override
public void dispose() {
    for (Disposable disposable : disposables) {
        disposable.dispose();
    }
}
