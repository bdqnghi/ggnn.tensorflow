/**
 * Start the simulation.
 */
public void start() {
    emitter.start();
    for (Influencer influencer : influencers) influencer.start();
}
