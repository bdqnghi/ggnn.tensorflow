public void dispose() {
    emitter.dispose();
    for (Influencer influencer : influencers) influencer.dispose();
}
