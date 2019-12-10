/**
 * Calls the {@link Actor#act(float)} method on each actor in the stage. Typically called each frame. This method also fires
 * enter and exit events.
 * @param delta Time in seconds since the last frame.
 */
public void act(float delta) {
    // Update over actors. Done in act() because actors may change position, which can fire enter/exit without an input event.
    for (int pointer = 0, n = pointerOverActors.length; pointer < n; pointer++) {
        Actor overLast = pointerOverActors[pointer];
        // Check if pointer is gone.
        if (!pointerTouched[pointer]) {
            if (overLast != null) {
                pointerOverActors[pointer] = null;
                screenToStageCoordinates(tempCoords.set(pointerScreenX[pointer], pointerScreenY[pointer]));
                // Exit over last.
                InputEvent event = Pools.obtain(InputEvent.class);
                event.setType(InputEvent.Type.exit);
                event.setStage(this);
                event.setStageX(tempCoords.x);
                event.setStageY(tempCoords.y);
                event.setRelatedActor(overLast);
                event.setPointer(pointer);
                overLast.fire(event);
                Pools.free(event);
            }
            continue;
        }
        // Update over actor for the pointer.
        pointerOverActors[pointer] = fireEnterAndExit(overLast, pointerScreenX[pointer], pointerScreenY[pointer], pointer);
    }
    // Update over actor for the mouse on the desktop.
    ApplicationType type = Gdx.app.getType();
    if (type == ApplicationType.Desktop || type == ApplicationType.Applet || type == ApplicationType.WebGL)
        mouseOverActor = fireEnterAndExit(mouseOverActor, mouseScreenX, mouseScreenY, -1);
    // Run actions and determine whether to request rendering (for when setContinuousRendering is off)
    root.act(delta);
}
