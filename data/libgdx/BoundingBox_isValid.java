/**
 * Returns whether this bounding box is valid. This means that {@link #max} is greater than {@link #min}.
 * @return True in case the bounding box is valid, false otherwise
 */
public boolean isValid() {
    return min.x < max.x && min.y < max.y && min.z < max.z;
}
