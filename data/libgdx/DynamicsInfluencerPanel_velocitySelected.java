protected void velocitySelected() {
    // Show the velocity value panel
    int index = velocityTable.getSelectedRow();
    if (index == -1)
        return;
    DynamicsModifier velocityValue = velocities.get(index).velocityValue;
    EditorPanel velocityPanel = getVelocityPanel(velocityValue);
    // Show the selected velocity
    if (selectedVelocityPanel != null && selectedVelocityPanel != velocityPanel)
        selectedVelocityPanel.setVisible(false);
    velocityPanel.setVisible(true);
    velocityPanel.showContent(true);
    selectedVelocityPanel = velocityPanel;
}
