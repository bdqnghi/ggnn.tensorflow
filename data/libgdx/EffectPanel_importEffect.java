protected void importEffect() {
    File file = editor.showFileLoadDialog();
    if (file != null) {
        ParticleEffect effect;
        if ((effect = editor.openEffect(file, false)) != null) {
            for (ParticleController controller : effect.getControllers()) addEmitter(controller, false);
            editIndex = 0;
            emitterTable.getSelectionModel().setSelectionInterval(editIndex, editIndex);
        }
    }
}
