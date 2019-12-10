/**
 * Bind the sub systems to the controller
 *  Called once during the init phase.
 */
protected void bind() {
    emitter.set(this);
    for (Influencer influencer : influencers) influencer.set(this);
    renderer.set(this);
}
