@Override
public void setValue(DynamicsModifier.Angular value) {
    super.setValue(value);
    if (value == null)
        return;
    setValue(isGlobalCheckBox, this.value.isGlobal);
    magnitudePanel.setValue(this.value.strengthValue);
    thetaPanel.setValue(this.value.thetaValue);
    phiPanel.setValue(this.value.phiValue);
}
