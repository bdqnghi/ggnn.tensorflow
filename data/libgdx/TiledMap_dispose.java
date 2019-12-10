@Override
public void dispose() {
    if (ownedResources != null) {
        for (Disposable resource : ownedResources) {
            resource.dispose();
        }
    }
}
