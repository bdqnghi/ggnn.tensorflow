/**
 * Restitution mixing law. Feel free to customize this. TODO djm: add customization
 *
 * @param restitution1
 * @param restitution2
 * @return
 */
public static float mixRestitution(float restitution1, float restitution2) {
    return restitution1 > restitution2 ? restitution1 : restitution2;
}
