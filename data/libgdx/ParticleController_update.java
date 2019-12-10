/**
 * Updates the particles data
 */
public void update() {
    emitter.update();
    for (Influencer influencer : influencers) influencer.update();
}
