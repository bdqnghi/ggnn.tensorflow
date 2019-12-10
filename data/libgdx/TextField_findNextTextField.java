private TextField findNextTextField(Array<Actor> actors, TextField best, Vector2 bestCoords, Vector2 currentCoords, boolean up) {
    for (int i = 0, n = actors.size; i < n; i++) {
        Actor actor = actors.get(i);
        if (actor == this)
            continue;
        if (actor instanceof TextField) {
            TextField textField = (TextField) actor;
            if (textField.isDisabled() || !textField.focusTraversal)
                continue;
            Vector2 actorCoords = actor.getParent().localToStageCoordinates(tmp3.set(actor.getX(), actor.getY()));
            if ((actorCoords.y < currentCoords.y || (actorCoords.y == currentCoords.y && actorCoords.x > currentCoords.x)) ^ up) {
                if (best == null || (actorCoords.y > bestCoords.y || (actorCoords.y == bestCoords.y && actorCoords.x < bestCoords.x)) ^ up) {
                    best = (TextField) actor;
                    bestCoords.set(actorCoords);
                }
            }
        } else if (actor instanceof Group)
            best = findNextTextField(((Group) actor).getChildren(), best, bestCoords, currentCoords, up);
    }
    return best;
}
