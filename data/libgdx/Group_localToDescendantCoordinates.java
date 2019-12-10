/**
 * Converts coordinates for this group to those of a descendant actor. The descendant does not need to be a direct child.
 * @throws IllegalArgumentException if the specified actor is not a descendant of this group.
 */
public Vector2 localToDescendantCoordinates(Actor descendant, Vector2 localCoords) {
    Group parent = descendant.parent;
    if (parent == null)
        throw new IllegalArgumentException("Child is not a descendant: " + descendant);
    // First convert to the actor's parent coordinates.
    if (parent != this)
        localToDescendantCoordinates(parent, localCoords);
    // Then from each parent down to the descendant.
    descendant.parentToLocalCoordinates(localCoords);
    return localCoords;
}
