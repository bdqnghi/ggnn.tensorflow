@Override
public void load(AssetManager manager, ResourceData data) {
    emitter.load(manager, data);
    for (Influencer influencer : influencers) influencer.load(manager, data);
    renderer.load(manager, data);
}
