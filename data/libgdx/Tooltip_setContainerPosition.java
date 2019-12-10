private void setContainerPosition(Actor actor, float x, float y) {
    this.targetActor = actor;
    Stage stage = actor.getStage();
    if (stage == null)
        return;
    container.pack();
    float offsetX = manager.offsetX, offsetY = manager.offsetY, dist = manager.edgeDistance;
    Vector2 point = actor.localToStageCoordinates(tmp.set(x + offsetX, y - offsetY - container.getHeight()));
    if (point.y < dist)
        point = actor.localToStageCoordinates(tmp.set(x + offsetX, y + offsetY));
    if (point.x < dist)
        point.x = dist;
    if (point.x + container.getWidth() > stage.getWidth() - dist)
        point.x = stage.getWidth() - dist - container.getWidth();
    if (point.y + container.getHeight() > stage.getHeight() - dist)
        point.y = stage.getHeight() - dist - container.getHeight();
    container.setPosition(point.x, point.y);
    point = actor.localToStageCoordinates(tmp.set(actor.getWidth() / 2, actor.getHeight() / 2));
    point.sub(container.getX(), container.getY());
    container.setOrigin(point.x, point.y);
}
