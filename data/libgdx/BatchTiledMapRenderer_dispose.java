@Override
public void dispose() {
    if (ownsBatch) {
        batch.dispose();
    }
}
