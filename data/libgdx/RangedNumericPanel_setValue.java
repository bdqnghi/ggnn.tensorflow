public void setValue(RangedNumericValue value) {
    super.setValue(value);
    if (value == null)
        return;
    setValue(minSlider, value.getLowMin());
    setValue(maxSlider, value.getLowMax());
    // System.out.println("min "+value.getLowMin()+", max "+value.getLowMax());
    if (minSlider.getValue() == maxSlider.getValue())
        rangeButton.doClick(0);
    else if (!maxSlider.isVisible())
        maxSlider.setVisible(true);
}
