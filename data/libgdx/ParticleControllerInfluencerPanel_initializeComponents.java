protected void initializeComponents() {
    super.initializeComponents();
    controllerPicker = new TemplatePickerPanel<ParticleController>(editor, null, this, ParticleController.class) {

        @Override
        protected String getTemplateName(ParticleController template, int index) {
            return template.name;
        }
    };
    reloadControllers();
    controllerPicker.setIsAlwayShown(true);
    contentPanel.add(new LoaderButton.ParticleEffectLoaderButton(editor, this), new GridBagConstraints(0, 0, 1, 1, 1, 1, GridBagConstraints.CENTER, GridBagConstraints.BOTH, new Insets(0, 0, 0, 6), 0, 0));
    contentPanel.add(controllerPicker, new GridBagConstraints(0, 1, 1, 1, 1, 1, GridBagConstraints.CENTER, GridBagConstraints.BOTH, new Insets(0, 0, 0, 6), 0, 0));
}
