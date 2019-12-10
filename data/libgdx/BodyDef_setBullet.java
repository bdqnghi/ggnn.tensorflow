/**
 * Is this a fast moving body that should be prevented from tunneling through other moving bodies?
 * Note that all bodies are prevented from tunneling through kinematic and static bodies. This
 * setting is only considered on dynamic bodies.
 *
 * @warning You should use this flag sparingly since it increases processing time.
 */
public void setBullet(boolean bullet) {
    this.bullet = bullet;
}
