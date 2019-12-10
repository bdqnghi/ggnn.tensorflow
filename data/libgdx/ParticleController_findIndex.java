/**
 * @return the index of the Influencer of the given type.
 */
private <K extends Influencer> int findIndex(Class<K> type) {
    for (int i = 0; i < influencers.size; ++i) {
        Influencer influencer = influencers.get(i);
        if (ClassReflection.isAssignableFrom(type, influencer.getClass())) {
            return i;
        }
    }
    return -1;
}
