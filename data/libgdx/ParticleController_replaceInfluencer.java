/**
 * Replaces the Influencer of the given type with the one passed as parameter.
 */
public <K extends Influencer> boolean replaceInfluencer(Class<K> type, K newInfluencer) {
    int index = findIndex(type);
    if (index > -1) {
        influencers.insert(index, newInfluencer);
        influencers.removeIndex(index + 1);
        return true;
    }
    return false;
}
