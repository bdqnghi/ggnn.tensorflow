@Override
public void write(Json json) {
    json.writeValue("name", name);
    json.writeValue("emitter", emitter, Emitter.class);
    json.writeValue("influencers", influencers, Array.class, Influencer.class);
    json.writeValue("renderer", renderer, ParticleControllerRenderer.class);
}
