/**
 * Turns debug lines on or off.
 */
public Table debug(Debug debug) {
    super.setDebug(debug != Debug.none);
    if (this.debug != debug) {
        this.debug = debug;
        if (debug == Debug.none)
            clearDebugRects();
        else
            invalidate();
    }
    return this;
}
