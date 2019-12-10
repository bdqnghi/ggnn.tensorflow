/**
 * From Real-time Collision Detection, p179.
 *
 * @param output
 * @param input
 */
public final boolean raycast(final RayCastOutput output, final RayCastInput input, IWorldPool argPool) {
    float tmin = -Float.MAX_VALUE;
    float tmax = Float.MAX_VALUE;
    final Vec2 p = argPool.popVec2();
    final Vec2 d = argPool.popVec2();
    final Vec2 absD = argPool.popVec2();
    final Vec2 normal = argPool.popVec2();
    p.set(input.p1);
    d.set(input.p2).subLocal(input.p1);
    Vec2.absToOut(d, absD);
    // x then y
    if (absD.x < Settings.EPSILON) {
        // Parallel.
        if (p.x < lowerBound.x || upperBound.x < p.x) {
            argPool.pushVec2(4);
            return false;
        }
    } else {
        final float inv_d = 1.0f / d.x;
        float t1 = (lowerBound.x - p.x) * inv_d;
        float t2 = (upperBound.x - p.x) * inv_d;
        // Sign of the normal vector.
        float s = -1.0f;
        if (t1 > t2) {
            final float temp = t1;
            t1 = t2;
            t2 = temp;
            s = 1.0f;
        }
        // Push the min up
        if (t1 > tmin) {
            normal.setZero();
            normal.x = s;
            tmin = t1;
        }
        // Pull the max down
        tmax = MathUtils.min(tmax, t2);
        if (tmin > tmax) {
            argPool.pushVec2(4);
            return false;
        }
    }
    if (absD.y < Settings.EPSILON) {
        // Parallel.
        if (p.y < lowerBound.y || upperBound.y < p.y) {
            argPool.pushVec2(4);
            return false;
        }
    } else {
        final float inv_d = 1.0f / d.y;
        float t1 = (lowerBound.y - p.y) * inv_d;
        float t2 = (upperBound.y - p.y) * inv_d;
        // Sign of the normal vector.
        float s = -1.0f;
        if (t1 > t2) {
            final float temp = t1;
            t1 = t2;
            t2 = temp;
            s = 1.0f;
        }
        // Push the min up
        if (t1 > tmin) {
            normal.setZero();
            normal.y = s;
            tmin = t1;
        }
        // Pull the max down
        tmax = MathUtils.min(tmax, t2);
        if (tmin > tmax) {
            argPool.pushVec2(4);
            return false;
        }
    }
    // Does the ray intersect beyond the max fraction?
    if (tmin < 0.0f || input.maxFraction < tmin) {
        argPool.pushVec2(4);
        return false;
    }
    // Intersection.
    output.fraction = tmin;
    output.normal.x = normal.x;
    output.normal.y = normal.y;
    argPool.pushVec2(4);
    return true;
}
