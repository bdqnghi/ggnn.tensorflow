protected void templateChecked(int index, Boolean isChecked) {
    T template = loadedTemplates.get(index);
    if (isChecked) {
        if (!isMultipleSelectionAllowed) {
            if (lastSelected > -1) {
                value.removeValue(loadedTemplates.get(lastSelected), true);
                EditorPanel.setValue(templatesTableModel, false, lastSelected, 1);
            }
        }
        value.add(template);
        lastSelected = index;
    } else {
        value.removeValue(template, true);
    }
    listener.onTemplateChecked(template, isChecked);
}
