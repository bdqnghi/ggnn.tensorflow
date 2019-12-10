@Override
protected void createHUD() {
    super.createHUD();
    final List<String> shadersList = new List(skin);
    shadersList.setItems(shaders);
    shadersList.addListener(new ClickListener() {

        @Override
        public void clicked(InputEvent event, float x, float y) {
            if (!shadersWindow.isCollapsed() && getTapCount() == 2) {
                setShader(shadersList.getSelected());
                shadersWindow.collapse();
            }
        }
    });
    shadersWindow = addListWindow("Shaders", shadersList, -1, -1);
    final List<String> materialsList = new List(skin);
    materialsList.setItems(materials);
    materialsList.addListener(new ClickListener() {

        @Override
        public void clicked(InputEvent event, float x, float y) {
            if (!materialsWindow.isCollapsed() && getTapCount() == 2) {
                setMaterial(materialsList.getSelected());
                materialsWindow.collapse();
            }
        }
    });
    materialsWindow = addListWindow("Materials", materialsList, modelsWindow.getWidth(), -1);
    final List<String> environmentsList = new List(skin);
    environmentsList.setItems(environments);
    environmentsList.addListener(new ClickListener() {

        @Override
        public void clicked(InputEvent event, float x, float y) {
            if (!environmentsWindow.isCollapsed() && getTapCount() == 2) {
                setEnvironment(environmentsList.getSelected());
                environmentsWindow.collapse();
            }
        }
    });
    environmentsWindow = addListWindow("Environments", environmentsList, materialsWindow.getRight(), -1);
}
