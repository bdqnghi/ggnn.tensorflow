/**
 * Removes the channel with the given id
 */
public <T> void removeArray(int id) {
    arrays.removeIndex(findIndex(id));
}
