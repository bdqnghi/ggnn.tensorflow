private void set(DynamicsInfluencer influencer) {
    // Clear
    for (int i = velocityTableModel.getRowCount() - 1; i >= 0; i--) {
        velocityTableModel.removeRow(i);
    }
    velocities.clear();
    // Add
    for (int i = 0, c = influencer.velocities.size; i < c; ++i) {
        velocities.add(new VelocityWrapper((DynamicsModifier) influencer.velocities.items[i], true));
        velocityTableModel.addRow(new Object[] { "Velocity " + i, true });
    }
    DefaultComboBoxModel model = (DefaultComboBoxModel) velocityBox.getModel();
    model.removeAllElements();
    for (Object velocityObject : getAvailableVelocities(editor.getControllerType())) {
        model.addElement(velocityObject);
    }
}
