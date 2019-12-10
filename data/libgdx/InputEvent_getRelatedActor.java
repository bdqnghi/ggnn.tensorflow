/**
 * The actor related to the event. Valid for: enter and exit. For enter, this is the actor being exited, or null. For exit,
 * this is the actor being entered, or null.
 */
public Actor getRelatedActor() {
    return relatedActor;
}
