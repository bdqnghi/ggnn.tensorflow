void deleteEmitter() {
    int row = emitterTable.getSelectedRow();
    if (row == -1)
        return;
    int newIndex = Math.min(editIndex, emitterTableModel.getRowCount() - 2);
    editor.removeEmitter(row);
    emitterTableModel.removeRow(row);
    // Reload data check
    emitterTable.getSelectionModel().setSelectionInterval(newIndex, newIndex);
}
