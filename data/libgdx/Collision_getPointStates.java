/**
 * Compute the point states given two manifolds. The states pertain to the transition from
 * manifold1 to manifold2. So state1 is either persist or remove while state2 is either add or
 * persist.
 *
 * @param state1
 * @param state2
 * @param manifold1
 * @param manifold2
 */
public static final void getPointStates(final PointState[] state1, final PointState[] state2, final Manifold manifold1, final Manifold manifold2) {
    for (int i = 0; i < Settings.maxManifoldPoints; i++) {
        state1[i] = PointState.NULL_STATE;
        state2[i] = PointState.NULL_STATE;
    }
    // Detect persists and removes.
    for (int i = 0; i < manifold1.pointCount; i++) {
        ContactID id = manifold1.points[i].id;
        state1[i] = PointState.REMOVE_STATE;
        for (int j = 0; j < manifold2.pointCount; j++) {
            if (manifold2.points[j].id.isEqual(id)) {
                state1[i] = PointState.PERSIST_STATE;
                break;
            }
        }
    }
    // Detect persists and adds
    for (int i = 0; i < manifold2.pointCount; i++) {
        ContactID id = manifold2.points[i].id;
        state2[i] = PointState.ADD_STATE;
        for (int j = 0; j < manifold1.pointCount; j++) {
            if (manifold1.points[j].id.isEqual(id)) {
                state2[i] = PointState.PERSIST_STATE;
                break;
            }
        }
    }
}
