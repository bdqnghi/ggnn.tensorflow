public final int loc(final int inputID) {
    return (inputID >= 0 && inputID < locations.length) ? locations[inputID] : -1;
}
