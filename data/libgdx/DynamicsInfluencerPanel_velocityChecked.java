protected void velocityChecked(int index, boolean isChecked) {
    ParticleController controller = editor.getEmitter();
    DynamicsInfluencer influencer = (DynamicsInfluencer) controller.findInfluencer(DynamicsInfluencer.class);
    influencer.velocities.clear();
    velocities.get(index).isActive = isChecked;
    for (VelocityWrapper wrapper : velocities) {
        if (wrapper.isActive)
            influencer.velocities.add(wrapper.velocityValue);
    }
    // Restart the effect and reinit the controller
    editor.restart();
}
