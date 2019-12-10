/**
 * Turns on actor debug lines.
 */
public Table debugActor() {
    super.setDebug(true);
    if (debug != Debug.actor) {
        this.debug = Debug.actor;
        invalidate();
    }
    return this;
}
