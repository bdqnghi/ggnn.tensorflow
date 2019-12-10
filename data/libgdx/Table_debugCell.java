/**
 * Turns on cell debug lines.
 */
public Table debugCell() {
    super.setDebug(true);
    if (debug != Debug.cell) {
        this.debug = Debug.cell;
        invalidate();
    }
    return this;
}
