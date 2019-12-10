/**
 * Normalizes the up vector by first calculating the right vector via a cross product between direction and up, and then
 * recalculating the up vector via a cross product between right and direction.
 */
public void normalizeUp() {
    tmpVec.set(direction).crs(up).nor();
    up.set(tmpVec).crs(direction).nor();
}
