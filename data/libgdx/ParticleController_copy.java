/**
 * @return a copy of this controller
 */
public ParticleController copy() {
    Emitter emitter = (Emitter) this.emitter.copy();
    Influencer[] influencers = new Influencer[this.influencers.size];
    int i = 0;
    for (Influencer influencer : this.influencers) {
        influencers[i++] = (Influencer) influencer.copy();
    }
    return new ParticleController(new String(this.name), emitter, (ParticleControllerRenderer<?, ?>) renderer.copy(), influencers);
}
