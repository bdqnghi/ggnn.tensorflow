/**
 * Returns a value that represents a float, from 0 to 1 (inclusive).
 */
static public Value floatValue(String name, final float currentValue, final float min, final float max, final String description) {
    return new DefaultValue(name, String.valueOf(currentValue)) {

        public void showDialog() {
            JSpinner spinner = new JSpinner(new SpinnerNumberModel(currentValue, min, max, 0.1f));
            if (showValueDialog(spinner, description))
                value = String.valueOf(((Double) spinner.getValue()).floatValue());
        }

        public Object getObject() {
            return Float.valueOf(value);
        }
    };
}
