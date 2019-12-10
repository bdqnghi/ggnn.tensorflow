public void addSource(final Source source) {
    DragListener listener = new DragListener() {

        public void dragStart(InputEvent event, float x, float y, int pointer) {
            if (activePointer != -1) {
                event.stop();
                return;
            }
            activePointer = pointer;
            dragStartTime = System.currentTimeMillis();
            payload = source.dragStart(event, getTouchDownX(), getTouchDownY(), pointer);
            event.stop();
            if (cancelTouchFocus && payload != null)
                source.getActor().getStage().cancelTouchFocusExcept(this, source.getActor());
        }

        public void drag(InputEvent event, float x, float y, int pointer) {
            if (payload == null)
                return;
            if (pointer != activePointer)
                return;
            Stage stage = event.getStage();
            Touchable dragActorTouchable = null;
            if (dragActor != null) {
                dragActorTouchable = dragActor.getTouchable();
                dragActor.setTouchable(Touchable.disabled);
            }
            // Find target.
            Target newTarget = null;
            isValidTarget = false;
            float stageX = event.getStageX() + touchOffsetX, stageY = event.getStageY() + touchOffsetY;
            // Prefer touchable actors.
            Actor hit = event.getStage().hit(stageX, stageY, true);
            if (hit == null)
                hit = event.getStage().hit(stageX, stageY, false);
            if (hit != null) {
                for (int i = 0, n = targets.size; i < n; i++) {
                    Target target = targets.get(i);
                    if (!target.actor.isAscendantOf(hit))
                        continue;
                    newTarget = target;
                    target.actor.stageToLocalCoordinates(tmpVector.set(stageX, stageY));
                    break;
                }
            }
            // if over a new target, notify the former target that it's being left behind.
            if (newTarget != target) {
                if (target != null)
                    target.reset(source, payload);
                target = newTarget;
            }
            // with any reset out of the way, notify new targets of drag.
            if (newTarget != null) {
                isValidTarget = newTarget.drag(source, payload, tmpVector.x, tmpVector.y, pointer);
            }
            if (dragActor != null)
                dragActor.setTouchable(dragActorTouchable);
            // Add/remove and position the drag actor.
            Actor actor = null;
            if (target != null)
                actor = isValidTarget ? payload.validDragActor : payload.invalidDragActor;
            if (actor == null)
                actor = payload.dragActor;
            if (actor == null)
                return;
            if (dragActor != actor) {
                if (dragActor != null)
                    dragActor.remove();
                dragActor = actor;
                stage.addActor(actor);
            }
            float actorX = event.getStageX() + dragActorX;
            float actorY = event.getStageY() + dragActorY - actor.getHeight();
            if (keepWithinStage) {
                if (actorX < 0)
                    actorX = 0;
                if (actorY < 0)
                    actorY = 0;
                if (actorX + actor.getWidth() > stage.getWidth())
                    actorX = stage.getWidth() - actor.getWidth();
                if (actorY + actor.getHeight() > stage.getHeight())
                    actorY = stage.getHeight() - actor.getHeight();
            }
            actor.setPosition(actorX, actorY);
        }

        public void dragStop(InputEvent event, float x, float y, int pointer) {
            if (pointer != activePointer)
                return;
            activePointer = -1;
            if (payload == null)
                return;
            if (System.currentTimeMillis() - dragStartTime < dragTime)
                isValidTarget = false;
            if (dragActor != null)
                dragActor.remove();
            if (isValidTarget) {
                float stageX = event.getStageX() + touchOffsetX, stageY = event.getStageY() + touchOffsetY;
                target.actor.stageToLocalCoordinates(tmpVector.set(stageX, stageY));
                target.drop(source, payload, tmpVector.x, tmpVector.y, pointer);
            }
            source.dragStop(event, x, y, pointer, payload, isValidTarget ? target : null);
            if (target != null)
                target.reset(source, payload);
            payload = null;
            target = null;
            isValidTarget = false;
            dragActor = null;
        }
    };
    listener.setTapSquareSize(tapSquareSize);
    listener.setButton(button);
    source.actor.addCaptureListener(listener);
    sourceListeners.put(source, listener);
}
