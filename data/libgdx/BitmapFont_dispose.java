/**
 * Disposes the texture used by this BitmapFont's region IF this BitmapFont created the texture.
 */
public void dispose() {
    if (ownsTexture) {
        for (int i = 0; i < regions.size; i++) regions.get(i).getTexture().dispose();
    }
}
