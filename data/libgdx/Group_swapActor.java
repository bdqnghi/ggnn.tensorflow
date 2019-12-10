/**
 * Swaps two actors. Returns false if the swap did not occur because the actors are not children of this group.
 */
public boolean swapActor(Actor first, Actor second) {
    int firstIndex = children.indexOf(first, true);
    int secondIndex = children.indexOf(second, true);
    if (firstIndex == -1 || secondIndex == -1)
        return false;
    children.swap(firstIndex, secondIndex);
    return true;
}
