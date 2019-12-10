@Override
protected void activate() {
    super.activate();
    if (value != null)
        value.setActive(activeButton.isSelected());
}
