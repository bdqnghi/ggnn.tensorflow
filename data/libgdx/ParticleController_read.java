@Override
public void read(Json json, JsonValue jsonMap) {
    name = json.readValue("name", String.class, jsonMap);
    emitter = json.readValue("emitter", Emitter.class, jsonMap);
    influencers.addAll(json.readValue("influencers", Array.class, Influencer.class, jsonMap));
    renderer = json.readValue("renderer", ParticleControllerRenderer.class, jsonMap);
}
