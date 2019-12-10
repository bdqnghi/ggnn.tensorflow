@Override
public void setValue(ScaledNumericValue value) {
    super.setValue(value);
    if (this.value == null)
        return;
    setValue(lowMinSlider, this.value.getLowMin());
    setValue(lowMaxSlider, this.value.getLowMax());
    setValue(highMinSlider, this.value.getHighMin());
    setValue(highMaxSlider, this.value.getHighMax());
    chart.setValues(this.value.getTimeline(), this.value.getScaling());
    setValue(relativeCheckBox, this.value.isRelative());
    if ((this.value.getLowMin() == this.value.getLowMax() && lowMaxSlider.isVisible()) || (this.value.getLowMin() != this.value.getLowMax() && !lowMaxSlider.isVisible())) {
        lowRangeButton.doClick(0);
    }
    if (((this.value.getHighMin() == this.value.getHighMax()) && highMaxSlider.isVisible()) || ((this.value.getHighMin() != this.value.getHighMax()) && !highMaxSlider.isVisible()))
        highRangeButton.doClick(0);
}
