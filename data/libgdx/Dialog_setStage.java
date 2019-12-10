protected void setStage(Stage stage) {
    if (stage == null)
        addListener(focusListener);
    else
        removeListener(focusListener);
    super.setStage(stage);
}
