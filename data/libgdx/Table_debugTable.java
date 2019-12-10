/**
 * Turns on table debug lines.
 */
public Table debugTable() {
    super.setDebug(true);
    if (debug != Debug.table) {
        this.debug = Debug.table;
        invalidate();
    }
    return this;
}
