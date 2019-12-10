/**
 * Whether this Shader instance implements the specified uniform, only valid after a call to init().
 */
public final boolean has(final int inputID) {
    return inputID >= 0 && inputID < locations.length && locations[inputID] >= 0;
}
