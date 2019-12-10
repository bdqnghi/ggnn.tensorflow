/**
 * @return the influencer having the given type.
 */
public <K extends Influencer> K findInfluencer(Class<K> influencerClass) {
    int index = findIndex(influencerClass);
    return index > -1 ? (K) influencers.get(index) : null;
}
