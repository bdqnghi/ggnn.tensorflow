protected void cloneEmitter() {
    int row = emitterTable.getSelectedRow();
    if (row == -1)
        return;
    ParticleController controller = editor.controllersData.get(row).controller.copy();
    controller.init();
    controller.name += " Clone";
    addEmitter(controller, true);
}
