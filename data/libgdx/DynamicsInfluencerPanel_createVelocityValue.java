private DynamicsModifier createVelocityValue(Object selectedItem) {
    DynamicsModifier velocityValue = null;
    if (selectedItem == VEL_TYPE_ROTATIONAL_2D)
        velocityValue = new DynamicsModifier.Rotational2D();
    else if (selectedItem == VEL_TYPE_ROTATIONAL_3D)
        velocityValue = new DynamicsModifier.Rotational3D();
    else if (selectedItem == VEL_TYPE_CENTRIPETAL)
        velocityValue = new DynamicsModifier.CentripetalAcceleration();
    else if (selectedItem == VEL_TYPE_TANGENTIAL)
        velocityValue = new DynamicsModifier.TangentialAcceleration();
    else if (selectedItem == VEL_TYPE_POLAR)
        velocityValue = new DynamicsModifier.PolarAcceleration();
    else if (selectedItem == VEL_TYPE_BROWNIAN)
        velocityValue = new DynamicsModifier.BrownianAcceleration();
    else if (selectedItem == VEL_TYPE_FACE)
        velocityValue = new DynamicsModifier.FaceDirection();
    return velocityValue;
}
