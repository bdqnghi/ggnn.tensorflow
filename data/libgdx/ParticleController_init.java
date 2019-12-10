/**
 * Initialize the controller.
 *  All the sub systems will be initialized and binded to the controller.
 *  Must be called before any other method.
 */
public void init() {
    bind();
    if (particles != null) {
        end();
        particleChannels.resetIds();
    }
    allocateChannels(emitter.maxParticleCount);
    emitter.init();
    for (Influencer influencer : influencers) influencer.init();
    renderer.init();
}
