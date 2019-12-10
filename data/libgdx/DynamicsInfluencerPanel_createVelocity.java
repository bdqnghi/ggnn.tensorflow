protected void createVelocity(Object selectedItem) {
    // Add the velocity to the table and to the influencer
    ParticleController controller = editor.getEmitter();
    DynamicsInfluencer influencer = (DynamicsInfluencer) controller.findInfluencer(DynamicsInfluencer.class);
    VelocityWrapper wrapper = new VelocityWrapper(createVelocityValue(selectedItem), true);
    velocities.add(wrapper);
    influencer.velocities.add(wrapper.velocityValue);
    int index = velocities.size - 1;
    velocityTableModel.addRow(new Object[] { "Velocity " + index, true });
    // Reinit
    editor.restart();
    // Select new velocity
    velocityTable.getSelectionModel().setSelectionInterval(index, index);
    revalidate();
    repaint();
}
