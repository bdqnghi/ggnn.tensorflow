@Override
public void setValue(DynamicsModifier.Strength value) {
    super.setValue(value);
    if (value == null)
        return;
    setValue(isGlobalCheckBox, this.value.isGlobal);
    magnitudePanel.setValue(value.strengthValue);
}
