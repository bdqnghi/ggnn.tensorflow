private void addEmitter(final ParticleController emitter, boolean select) {
    editor.addEmitter(emitter);
    emitterTableModel.addRow(new Object[] { emitter.name, true });
    int row = emitterTableModel.getRowCount() - 1;
    emitterChecked(row, true);
    if (select) {
        emitterTable.getSelectionModel().setSelectionInterval(row, row);
    }
}
