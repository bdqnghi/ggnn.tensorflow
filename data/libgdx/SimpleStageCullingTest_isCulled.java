private boolean isCulled() {
    // we start by setting the stage coordinates to this
    // actors coordinates which are relative to its parent
    // Group.
    float stageX = getX();
    float stageY = getY();
    // now we go up the hierarchy and add all the parents'
    // coordinates to this actors coordinates. Note that
    // this assumes that neither this actor nor any of its
    // parents are rotated or scaled!
    Actor parent = this.getParent();
    while (parent != null) {
        stageX += parent.getX();
        stageY += parent.getY();
        parent = parent.getParent();
    }
    // now we check if the rectangle of this actor in screen
    // coordinates is in the rectangle spanned by the camera's
    // view. This assumes that the camera has no zoom and is
    // not rotated!
    actorRect.set(stageX, stageY, getWidth(), getHeight());
    camRect.set(camera.position.x - camera.viewportWidth / 2.0f, camera.position.y - camera.viewportHeight / 2.0f, camera.viewportWidth, camera.viewportHeight);
    visible = camRect.overlaps(actorRect);
    return !visible;
}
