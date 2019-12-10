private Object[] getAvailableVelocities(ControllerType type) {
    if (type == ControllerType.Billboard || type == ControllerType.PointSprite) {
        return new String[] { VEL_TYPE_ROTATIONAL_2D, VEL_TYPE_CENTRIPETAL, VEL_TYPE_TANGENTIAL, VEL_TYPE_POLAR, VEL_TYPE_BROWNIAN };
    } else if (type == ControllerType.ModelInstance || type == ControllerType.ParticleController) {
        return new String[] { VEL_TYPE_ROTATIONAL_3D, VEL_TYPE_CENTRIPETAL, VEL_TYPE_TANGENTIAL, VEL_TYPE_POLAR, VEL_TYPE_BROWNIAN, VEL_TYPE_FACE };
    }
    return null;
}
