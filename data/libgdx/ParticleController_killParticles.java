/**
 * Generally called by the Emitter.
 * This method will notify all the sub systems that a given amount
 * of particles has been killed.
 */
public void killParticles(int startIndex, int count) {
    emitter.killParticles(startIndex, count);
    for (Influencer influencer : influencers) influencer.killParticles(startIndex, count);
}
