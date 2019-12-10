public float getProgress() {
    long total = getTotalSize();
    return total == 0 ? 1 : (getDownloadedSize() / (float) total);
}
