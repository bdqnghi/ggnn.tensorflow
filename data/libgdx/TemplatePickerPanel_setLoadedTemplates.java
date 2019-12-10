public void setLoadedTemplates(Array<T> templates) {
    loadedTemplates.clear();
    loadedTemplates.addAll(templates);
    loadedTemplates.removeAll(excludedTemplates, true);
    templatesTableModel.getDataVector().removeAllElements();
    int i = 0;
    for (T template : templates) {
        templatesTableModel.addRow(new Object[] { getTemplateName(template, i), false });
        i++;
    }
    lastSelected = -1;
    setValue(value);
}
