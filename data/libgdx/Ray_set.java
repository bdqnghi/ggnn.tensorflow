/**
 * Sets the starting position and direction from the given ray
 *
 * @param ray The ray
 * @return This ray for chaining
 */
public Ray set(Ray ray) {
    this.origin.set(ray.origin);
    this.direction.set(ray.direction);
    return this;
}
