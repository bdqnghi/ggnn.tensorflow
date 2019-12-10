public void dispose() {
    clear();
    if (ownsBatch)
        batch.dispose();
}
