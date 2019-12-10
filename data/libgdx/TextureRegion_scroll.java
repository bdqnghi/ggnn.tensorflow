/**
 * Offsets the region relative to the current region. Generally the region's size should be the entire size of the texture in
 * the direction(s) it is scrolled.
 * @param xAmount The percentage to offset horizontally.
 * @param yAmount The percentage to offset vertically. This is done in texture space, so up is negative.
 */
public void scroll(float xAmount, float yAmount) {
    if (xAmount != 0) {
        float width = (u2 - u) * texture.getWidth();
        u = (u + xAmount) % 1;
        u2 = u + width / texture.getWidth();
    }
    if (yAmount != 0) {
        float height = (v2 - v) * texture.getHeight();
        v = (v + yAmount) % 1;
        v2 = v + height / texture.getHeight();
    }
}
