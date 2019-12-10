/**
 * Generally called by the Emitter.
 * This method will notify all the sub systems that a given amount
 * of particles has been activated.
 */
public void activateParticles(int startIndex, int count) {
    emitter.activateParticles(startIndex, count);
    for (Influencer influencer : influencers) influencer.activateParticles(startIndex, count);
}
