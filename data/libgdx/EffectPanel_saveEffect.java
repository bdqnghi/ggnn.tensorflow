void saveEffect() {
    File file = editor.showFileSaveDialog();
    if (file != null) {
        int index = 0;
        for (ControllerData data : editor.controllersData) data.controller.name = ((String) emitterTableModel.getValueAt(index++, 0));
        editor.saveEffect(file);
    }
}
