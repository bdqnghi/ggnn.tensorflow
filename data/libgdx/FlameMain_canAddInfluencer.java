protected boolean canAddInfluencer(Class influencerType, ParticleController controller) {
    boolean hasSameInfluencer = controller.findInfluencer(influencerType) != null;
    if (!hasSameInfluencer) {
        if ((ColorInfluencer.Single.class.isAssignableFrom(influencerType) && controller.findInfluencer(ColorInfluencer.Random.class) != null) || (ColorInfluencer.Random.class.isAssignableFrom(influencerType) && controller.findInfluencer(ColorInfluencer.Single.class) != null)) {
            return false;
        }
        if (RegionInfluencer.class.isAssignableFrom(influencerType)) {
            return controller.findInfluencer(RegionInfluencer.class) == null;
        } else if (ModelInfluencer.class.isAssignableFrom(influencerType)) {
            return controller.findInfluencer(ModelInfluencer.class) == null;
        } else if (ParticleControllerInfluencer.class.isAssignableFrom(influencerType)) {
            return controller.findInfluencer(ParticleControllerInfluencer.class) == null;
        }
    }
    return !hasSameInfluencer;
}
