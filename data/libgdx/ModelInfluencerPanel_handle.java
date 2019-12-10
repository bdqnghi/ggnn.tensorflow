@Override
public void handle(int aEventType, Object aEventData) {
    if (aEventType == FlameMain.EVT_ASSET_RELOADED) {
        Object[] data = (Object[]) aEventData;
        if (data[0] instanceof Model) {
            if (value.models.removeValue((Model) data[0], true)) {
                value.models.add((Model) data[1]);
                pickerPanel.reloadTemplates();
                pickerPanel.setValue(value.models);
                editor.restart();
            }
        }
    }
}
