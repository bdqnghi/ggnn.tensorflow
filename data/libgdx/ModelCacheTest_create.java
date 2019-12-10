@Override
public void create() {
    super.create();
    modelCache = new ModelCache();
    cacheCheckBox = new CheckBox("Cache", skin);
    cacheCheckBox.setChecked(false);
    cacheCheckBox.setPosition(hudWidth - cacheCheckBox.getWidth(), moveCheckBox.getTop());
    hud.addActor(cacheCheckBox);
}
