/**
 * Removes the Influencer of the given type.
 */
public <K extends Influencer> void removeInfluencer(Class<K> type) {
    int index = findIndex(type);
    if (index > -1)
        influencers.removeIndex(index);
}
