/**
 * Returns a value that represents a fixed number of options. All options are strings.
 * @param options The first array has an entry for each option. Each entry is either a String[1] that is both the display value
 *           and actual value, or a String[2] whose first element is the display value and second element is the actual value.
 */
static public Value optionValue(String name, final String currentValue, final String[][] options, final String description) {
    return new DefaultValue(name, currentValue.toString()) {

        public void showDialog() {
            int selectedIndex = -1;
            DefaultComboBoxModel model = new DefaultComboBoxModel();
            for (int i = 0; i < options.length; i++) {
                model.addElement(options[i][0]);
                if (getValue(i).equals(currentValue))
                    selectedIndex = i;
            }
            JComboBox comboBox = new JComboBox(model);
            comboBox.setSelectedIndex(selectedIndex);
            if (showValueDialog(comboBox, description))
                value = getValue(comboBox.getSelectedIndex());
        }

        private String getValue(int i) {
            if (options[i].length == 1)
                return options[i][0];
            return options[i][1];
        }

        public String toString() {
            for (int i = 0; i < options.length; i++) if (getValue(i).equals(value))
                return options[i][0].toString();
            return "";
        }

        public Object getObject() {
            return value;
        }
    };
}
