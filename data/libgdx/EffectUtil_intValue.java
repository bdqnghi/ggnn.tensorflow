/**
 * Returns a value that represents an int.
 */
static public Value intValue(String name, final int currentValue, final String description) {
    return new DefaultValue(name, String.valueOf(currentValue)) {

        public void showDialog() {
            JSpinner spinner = new JSpinner(new SpinnerNumberModel(currentValue, Short.MIN_VALUE, Short.MAX_VALUE, 1));
            if (showValueDialog(spinner, description))
                value = String.valueOf(spinner.getValue());
        }

        public Object getObject() {
            return Integer.valueOf(value);
        }
    };
}
