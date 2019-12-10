void openEffect() {
    File file = editor.showFileLoadDialog();
    if (file != null) {
        if (editor.openEffect(file, true) != null) {
            emitterTableModel.getDataVector().removeAllElements();
            for (ControllerData data : editor.controllersData) {
                emitterTableModel.addRow(new Object[] { data.controller.name, true });
            }
            editIndex = 0;
            emitterTable.getSelectionModel().setSelectionInterval(editIndex, editIndex);
        }
    }
}
