/**
 * Scales this vector by the given values
 * @param vx X value
 * @param vy Y value
 * @param vz Z value
 * @return This vector for chaining
 */
public Vector3 scl(float vx, float vy, float vz) {
    return this.set(this.x * vx, this.y * vy, this.z * vz);
}
