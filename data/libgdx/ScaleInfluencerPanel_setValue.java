@Override
public void setValue(ScaleInfluencer value) {
    super.setValue(value);
    if (value == null)
        return;
    scalePanel.setValue(value.value);
}
