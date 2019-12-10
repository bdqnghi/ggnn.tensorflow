private void initialize() {
    setModal(true);
    defaults().space(6);
    add(contentTable = new Table(skin)).expand().fill();
    row();
    add(buttonTable = new Table(skin));
    contentTable.defaults().space(6);
    buttonTable.defaults().space(6);
    buttonTable.addListener(new ChangeListener() {

        public void changed(ChangeEvent event, Actor actor) {
            if (!values.containsKey(actor))
                return;
            while (actor.getParent() != buttonTable) actor = actor.getParent();
            result(values.get(actor));
            if (!cancelHide)
                hide();
            cancelHide = false;
        }
    });
    focusListener = new FocusListener() {

        public void keyboardFocusChanged(FocusEvent event, Actor actor, boolean focused) {
            if (!focused)
                focusChanged(event);
        }

        public void scrollFocusChanged(FocusEvent event, Actor actor, boolean focused) {
            if (!focused)
                focusChanged(event);
        }

        private void focusChanged(FocusEvent event) {
            Stage stage = getStage();
            if (isModal && stage != null && stage.getRoot().getChildren().size > 0 && stage.getRoot().getChildren().peek() == Dialog.this) {
                // Dialog is top most actor.
                Actor newFocusedActor = event.getRelatedActor();
                if (newFocusedActor != null && !newFocusedActor.isDescendantOf(Dialog.this) && !(newFocusedActor.equals(previousKeyboardFocus) || newFocusedActor.equals(previousScrollFocus)))
                    event.cancel();
            }
        }
    };
}
