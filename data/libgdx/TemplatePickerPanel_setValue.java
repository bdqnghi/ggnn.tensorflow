@Override
public void setValue(Array<T> value) {
    super.setValue(value);
    if (value == null)
        return;
    if (!isMultipleSelectionAllowed && value.size > 1)
        throw new RuntimeException("Multiple selection must be enabled to ensure consistency between picked and available models.");
    for (int i = 0; i < value.size; ++i) {
        T model = value.get(i);
        int index = loadedTemplates.indexOf(model, true);
        if (index > -1) {
            EditorPanel.setValue(templatesTableModel, true, index, 1);
            lastSelected = index;
        }
    }
}
