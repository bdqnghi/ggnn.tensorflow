static public RemoveActorAction removeActor(Actor removeActor) {
    RemoveActorAction action = action(RemoveActorAction.class);
    action.setTarget(removeActor);
    return action;
}
