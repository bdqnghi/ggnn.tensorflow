private EditorPanel getVelocityPanel(DynamicsModifier velocityValue) {
    EditorPanel panel = null;
    // Billboards
    if (velocityValue instanceof DynamicsModifier.Rotational2D) {
        strengthVelocityPanel.setValue((DynamicsModifier.Strength) velocityValue);
        strengthVelocityPanel.setName("Angular Velocity");
        strengthVelocityPanel.setDescription("The angular speed around the billboard facing direction, in degrees/sec .");
        panel = strengthVelocityPanel;
    } else if (velocityValue instanceof CentripetalAcceleration) {
        strengthVelocityPanel.setValue((DynamicsModifier.CentripetalAcceleration) velocityValue);
        strengthVelocityPanel.setName("Centripetal Acceleration");
        strengthVelocityPanel.setDescription("A directional acceleration, the direction is towards the origin (global), or towards the emitter position (local), in world units/sec2 .");
        panel = strengthVelocityPanel;
    } else if (velocityValue instanceof TangentialAcceleration) {
        angularVelocityPanel.setValue((DynamicsModifier.Angular) velocityValue);
        angularVelocityPanel.setName("Tangetial Velocity");
        angularVelocityPanel.setDescription("A directional acceleration (axis and magnitude), the final direction is the cross product between particle position and the axis, in world units/sec2 .");
        panel = angularVelocityPanel;
    } else if (velocityValue instanceof PolarAcceleration) {
        angularVelocityPanel.setValue((DynamicsModifier.Angular) velocityValue);
        angularVelocityPanel.setName("Polar Velocity");
        angularVelocityPanel.setDescription("A directional acceleration (axis and magnitude), in world units/sec2 .");
        panel = angularVelocityPanel;
    } else if (velocityValue instanceof BrownianAcceleration) {
        strengthVelocityPanel.setValue((DynamicsModifier.Strength) velocityValue);
        strengthVelocityPanel.setName("Brownian Velocity");
        strengthVelocityPanel.setDescription("A directional acceleration which has random direction at each update, in world units/sec2.");
        panel = strengthVelocityPanel;
    } else if (velocityValue instanceof Rotational3D) {
        angularVelocityPanel.setValue((DynamicsModifier.Angular) velocityValue);
        angularVelocityPanel.setName("Angular Velocity");
        angularVelocityPanel.setDescription("An angular velocity (axis and magnitude), in degree/sec2.");
        panel = angularVelocityPanel;
    } else if (velocityValue instanceof FaceDirection) {
        emptyPanel.setName("Face");
        emptyPanel.setDescription("Rotates the model to face its current velocity (Do not add any other angular velocity when using this).");
        panel = emptyPanel;
    }
    return panel;
}
