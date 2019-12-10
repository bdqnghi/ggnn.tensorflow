protected void initializeComponents() {
    super.initializeComponents();
    pickerPanel = new TemplatePickerPanel<Model>(editor, null, this, Model.class, new LoaderButton.ModelLoaderButton(editor));
    pickerPanel.setIsAlwayShown(true);
    contentPanel.add(pickerPanel, new GridBagConstraints(0, 0, 1, 1, 1, 1, GridBagConstraints.CENTER, GridBagConstraints.BOTH, new Insets(0, 0, 0, 6), 0, 0));
}
