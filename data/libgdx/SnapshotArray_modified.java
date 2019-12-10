private void modified() {
    if (snapshot == null || snapshot != items)
        return;
    // Snapshot is in use, copy backing array to recycled array or create new backing array.
    if (recycled != null && recycled.length >= size) {
        System.arraycopy(items, 0, recycled, 0, size);
        items = recycled;
        recycled = null;
    } else
        resize(items.length);
}
