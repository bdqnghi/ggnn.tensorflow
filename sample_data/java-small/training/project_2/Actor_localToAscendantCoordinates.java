/**
 * Converts coordinates for this actor to those of a parent actor. The ascendant does not need to be a direct parent.
 */
public Vector2 localToAscendantCoordinates(Actor ascendant, Vector2 localCoords) {
    Actor actor = this;
    while (actor != null) {
        actor.localToParentCoordinates(localCoords);
        actor = actor.parent;
        if (actor == ascendant)
            break;
    }
    return localCoords;
}
