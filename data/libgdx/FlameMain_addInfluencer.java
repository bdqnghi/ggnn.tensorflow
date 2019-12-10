protected void addInfluencer(Class<Influencer> type, ParticleController controller) {
    if (controller.findInfluencer(type) != null)
        return;
    try {
        controller.end();
        Influencer newInfluencer = type.newInstance();
        boolean replaced = false;
        if (ColorInfluencer.class.isAssignableFrom(type)) {
            replaced = controller.replaceInfluencer(ColorInfluencer.class, (ColorInfluencer) newInfluencer);
        } else if (RegionInfluencer.class.isAssignableFrom(type)) {
            replaced = controller.replaceInfluencer(RegionInfluencer.class, (RegionInfluencer) newInfluencer);
        } else if (ModelInfluencer.class.isAssignableFrom(type)) {
            ModelInfluencer newModelInfluencer = (ModelInfluencer) newInfluencer;
            ModelInfluencer currentInfluencer = (ModelInfluencer) controller.findInfluencer(ModelInfluencer.class);
            if (currentInfluencer != null) {
                newModelInfluencer.models.add(currentInfluencer.models.first());
            }
            replaced = controller.replaceInfluencer(ModelInfluencer.class, (ModelInfluencer) newInfluencer);
        } else if (ParticleControllerInfluencer.class.isAssignableFrom(type)) {
            ParticleControllerInfluencer newModelInfluencer = (ParticleControllerInfluencer) newInfluencer;
            ParticleControllerInfluencer currentInfluencer = (ParticleControllerInfluencer) controller.findInfluencer(ParticleControllerInfluencer.class);
            if (currentInfluencer != null) {
                newModelInfluencer.templates.add(currentInfluencer.templates.first());
            }
            replaced = controller.replaceInfluencer(ParticleControllerInfluencer.class, (ParticleControllerInfluencer) newInfluencer);
        }
        if (!replaced) {
            if (getControllerType() != ControllerType.ParticleController)
                controller.influencers.add(newInfluencer);
            else {
                Influencer finalizer = controller.influencers.pop();
                controller.influencers.add(newInfluencer);
                controller.influencers.add(finalizer);
            }
        }
        controller.init();
        effect.start();
        reloadRows();
    } catch (Exception e1) {
        e1.printStackTrace();
    }
}
