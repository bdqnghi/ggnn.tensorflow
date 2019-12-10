@Override
public void dispose() {
    modelBatch.dispose();
    instances.clear();
    assets.dispose();
}
