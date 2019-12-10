@Override
protected void initializeComponents() {
    super.initializeComponents();
    addContent(0, 0, scalePanel = new ScaledNumericPanel(editor, null, "Life", "", ""));
    scalePanel.setIsAlwayShown(true);
}
