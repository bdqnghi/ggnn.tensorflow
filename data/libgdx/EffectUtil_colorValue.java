/**
 * Returns a value that represents a color.
 */
static public Value colorValue(String name, Color currentValue) {
    return new DefaultValue(name, EffectUtil.toString(currentValue)) {

        public void showDialog() {
            Color newColor = JColorChooser.showDialog(null, "Choose a color", EffectUtil.fromString(value));
            if (newColor != null)
                value = EffectUtil.toString(newColor);
        }

        public Object getObject() {
            return EffectUtil.fromString(value);
        }
    };
}
