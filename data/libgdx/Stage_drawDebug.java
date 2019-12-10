private void drawDebug() {
    if (debugShapes == null) {
        debugShapes = new ShapeRenderer();
        debugShapes.setAutoShapeType(true);
    }
    if (debugUnderMouse || debugParentUnderMouse || debugTableUnderMouse != Debug.none) {
        screenToStageCoordinates(tempCoords.set(Gdx.input.getX(), Gdx.input.getY()));
        Actor actor = hit(tempCoords.x, tempCoords.y, true);
        if (actor == null)
            return;
        if (debugParentUnderMouse && actor.parent != null)
            actor = actor.parent;
        if (debugTableUnderMouse == Debug.none)
            actor.setDebug(true);
        else {
            while (actor != null) {
                if (actor instanceof Table)
                    break;
                actor = actor.parent;
            }
            if (actor == null)
                return;
            ((Table) actor).debug(debugTableUnderMouse);
        }
        if (debugAll && actor instanceof Group)
            ((Group) actor).debugAll();
        disableDebug(root, actor);
    } else {
        if (debugAll)
            root.debugAll();
    }
    Gdx.gl.glEnable(GL20.GL_BLEND);
    debugShapes.setProjectionMatrix(viewport.getCamera().combined);
    debugShapes.begin();
    root.drawDebug(debugShapes);
    debugShapes.end();
}
