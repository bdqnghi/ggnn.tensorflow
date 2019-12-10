/**
 * Friction mixing law. Feel free to customize this. TODO djm: add customization
 *
 * @param friction1
 * @param friction2
 * @return
 */
public static float mixFriction(float friction1, float friction2) {
    return MathUtils.sqrt(friction1 * friction2);
}
