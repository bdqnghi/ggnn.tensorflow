/**
 * Intersects a {@link Ray} and a {@link BoundingBox}, returning the intersection point in intersection.
 * This intersection is defined as the point on the ray closest to the origin which is within the specified
 * bounds.
 *
 * <p>The returned intersection (if any) is guaranteed to be within the bounds of the bounding box, but
 * it can occasionally diverge slightly from ray, due to small floating-point errors.</p>
 *
 * <p>If the origin of the ray is inside the box, this method returns true and the intersection point is
 * set to the origin of the ray, accordingly to the definition above.</p>
 *
 * @param ray The ray
 * @param box The box
 * @param intersection The intersection point (optional)
 * @return Whether an intersection is present.
 */
public static boolean intersectRayBounds(Ray ray, BoundingBox box, Vector3 intersection) {
    if (box.contains(ray.origin)) {
        if (intersection != null)
            intersection.set(ray.origin);
        return true;
    }
    float lowest = 0, t;
    boolean hit = false;
    // min x
    if (ray.origin.x <= box.min.x && ray.direction.x > 0) {
        t = (box.min.x - ray.origin.x) / ray.direction.x;
        if (t >= 0) {
            v2.set(ray.direction).scl(t).add(ray.origin);
            if (v2.y >= box.min.y && v2.y <= box.max.y && v2.z >= box.min.z && v2.z <= box.max.z && (!hit || t < lowest)) {
                hit = true;
                lowest = t;
            }
        }
    }
    // max x
    if (ray.origin.x >= box.max.x && ray.direction.x < 0) {
        t = (box.max.x - ray.origin.x) / ray.direction.x;
        if (t >= 0) {
            v2.set(ray.direction).scl(t).add(ray.origin);
            if (v2.y >= box.min.y && v2.y <= box.max.y && v2.z >= box.min.z && v2.z <= box.max.z && (!hit || t < lowest)) {
                hit = true;
                lowest = t;
            }
        }
    }
    // min y
    if (ray.origin.y <= box.min.y && ray.direction.y > 0) {
        t = (box.min.y - ray.origin.y) / ray.direction.y;
        if (t >= 0) {
            v2.set(ray.direction).scl(t).add(ray.origin);
            if (v2.x >= box.min.x && v2.x <= box.max.x && v2.z >= box.min.z && v2.z <= box.max.z && (!hit || t < lowest)) {
                hit = true;
                lowest = t;
            }
        }
    }
    // max y
    if (ray.origin.y >= box.max.y && ray.direction.y < 0) {
        t = (box.max.y - ray.origin.y) / ray.direction.y;
        if (t >= 0) {
            v2.set(ray.direction).scl(t).add(ray.origin);
            if (v2.x >= box.min.x && v2.x <= box.max.x && v2.z >= box.min.z && v2.z <= box.max.z && (!hit || t < lowest)) {
                hit = true;
                lowest = t;
            }
        }
    }
    // min z
    if (ray.origin.z <= box.min.z && ray.direction.z > 0) {
        t = (box.min.z - ray.origin.z) / ray.direction.z;
        if (t >= 0) {
            v2.set(ray.direction).scl(t).add(ray.origin);
            if (v2.x >= box.min.x && v2.x <= box.max.x && v2.y >= box.min.y && v2.y <= box.max.y && (!hit || t < lowest)) {
                hit = true;
                lowest = t;
            }
        }
    }
    // max y
    if (ray.origin.z >= box.max.z && ray.direction.z < 0) {
        t = (box.max.z - ray.origin.z) / ray.direction.z;
        if (t >= 0) {
            v2.set(ray.direction).scl(t).add(ray.origin);
            if (v2.x >= box.min.x && v2.x <= box.max.x && v2.y >= box.min.y && v2.y <= box.max.y && (!hit || t < lowest)) {
                hit = true;
                lowest = t;
            }
        }
    }
    if (hit && intersection != null) {
        intersection.set(ray.direction).scl(lowest).add(ray.origin);
        if (intersection.x < box.min.x) {
            intersection.x = box.min.x;
        } else if (intersection.x > box.max.x) {
            intersection.x = box.max.x;
        }
        if (intersection.y < box.min.y) {
            intersection.y = box.min.y;
        } else if (intersection.y > box.max.y) {
            intersection.y = box.max.y;
        }
        if (intersection.z < box.min.z) {
            intersection.z = box.min.z;
        } else if (intersection.z > box.max.z) {
            intersection.z = box.max.z;
        }
    }
    return hit;
}
