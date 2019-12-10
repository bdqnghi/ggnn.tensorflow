protected void deleteVelocity() {
    int row = velocityTable.getSelectedRow();
    if (row == -1)
        return;
    // Remove the velocity from the table
    ParticleController controller = editor.getEmitter();
    DynamicsInfluencer influencer = (DynamicsInfluencer) controller.findInfluencer(DynamicsInfluencer.class);
    influencer.velocities.removeValue(velocities.removeIndex(row).velocityValue, true);
    velocityTableModel.removeRow(row);
    // Restart the effect and reinit the controller
    editor.restart();
    selectedVelocityPanel.setVisible(false);
    selectedVelocityPanel = null;
}
