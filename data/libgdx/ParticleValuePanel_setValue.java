@Override
public void setValue(T value) {
    super.setValue(value);
    if (value != null) {
        activeButton.setSelected(value.isActive());
    }
}
