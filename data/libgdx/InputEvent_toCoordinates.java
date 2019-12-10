/**
 * Sets actorCoords to this event's coordinates relative to the specified actor.
 * @param actorCoords Output for resulting coordinates.
 */
public Vector2 toCoordinates(Actor actor, Vector2 actorCoords) {
    actorCoords.set(stageX, stageY);
    actor.stageToLocalCoordinates(actorCoords);
    return actorCoords;
}
