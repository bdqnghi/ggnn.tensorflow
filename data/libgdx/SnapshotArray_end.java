/**
 * Releases the guarantee that the array returned by {@link #begin()} won't be modified.
 */
public void end() {
    snapshots = Math.max(0, snapshots - 1);
    if (snapshot == null)
        return;
    if (snapshot != items && snapshots == 0) {
        // The backing array was copied, keep around the old array.
        recycled = snapshot;
        for (int i = 0, n = recycled.length; i < n; i++) recycled[i] = null;
    }
    snapshot = null;
}
