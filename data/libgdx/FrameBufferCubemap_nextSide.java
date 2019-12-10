/**
 * Bind the next side of cubemap and return false if no more side. Should be called in between a call to {@link #begin()} and
 * #end to cycle to each side of the cubemap to render on.
 */
public boolean nextSide() {
    if (currentSide > 5) {
        throw new GdxRuntimeException("No remaining sides.");
    } else if (currentSide == 5) {
        return false;
    }
    currentSide++;
    bindSide(getSide());
    return true;
}
