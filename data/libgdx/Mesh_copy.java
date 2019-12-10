/**
 * Copies this mesh.
 * @param isStatic whether the new mesh is static or not. Allows for internal optimizations.
 * @return the copy of this mesh
 */
public Mesh copy(boolean isStatic) {
    return copy(isStatic, false, null);
}
