/**
 * Recalculates vertices array if it grew out of sync with the properties (position, ..)
 */
protected void update() {
    if (!updated) {
        resetVertices();
        transformVertices();
    }
}
