/**
 * Returns the separations of this manifold, a negative value indicates overlap, in meters. Use getNumberOfContactPoints to
 * determine how many separations there are (0,1 or 2)
 */
public float[] getSeparations() {
    return separations;
}
