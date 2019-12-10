void emitterSelected() {
    int row = emitterTable.getSelectedRow();
    if (row == editIndex)
        return;
    editIndex = row;
    editor.reloadRows();
}
