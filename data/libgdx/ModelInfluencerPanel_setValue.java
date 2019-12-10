@Override
public void setValue(ModelInfluencer value) {
    super.setValue(value);
    if (value == null)
        return;
    pickerPanel.setValue(value.models);
}
