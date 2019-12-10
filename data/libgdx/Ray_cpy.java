/**
 * @return a copy of this ray.
 */
public Ray cpy() {
    return new Ray(this.origin, this.direction);
}
