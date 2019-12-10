/**
 * Returns a value that represents a boolean.
 */
static public Value booleanValue(String name, final boolean currentValue, final String description) {
    return new DefaultValue(name, String.valueOf(currentValue)) {

        public void showDialog() {
            JCheckBox checkBox = new JCheckBox();
            checkBox.setSelected(currentValue);
            if (showValueDialog(checkBox, description))
                value = String.valueOf(checkBox.isSelected());
        }

        public Object getObject() {
            return Boolean.valueOf(value);
        }
    };
}
