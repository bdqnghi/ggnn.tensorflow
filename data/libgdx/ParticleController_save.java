@Override
public void save(AssetManager manager, ResourceData data) {
    emitter.save(manager, data);
    for (Influencer influencer : influencers) influencer.save(manager, data);
    renderer.save(manager, data);
}
