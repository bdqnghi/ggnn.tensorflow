/**
 * End the simulation.
 */
public void end() {
    for (Influencer influencer : influencers) influencer.end();
    emitter.end();
}
