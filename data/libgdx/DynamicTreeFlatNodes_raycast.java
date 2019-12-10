@Override
public void raycast(TreeRayCastCallback callback, RayCastInput input) {
    final Vec2 p1 = input.p1;
    final Vec2 p2 = input.p2;
    float p1x = p1.x, p2x = p2.x, p1y = p1.y, p2y = p2.y;
    float vx, vy;
    float rx, ry;
    float absVx, absVy;
    float cx, cy;
    float hx, hy;
    float tempx, tempy;
    r.x = p2x - p1x;
    r.y = p2y - p1y;
    assert ((r.x * r.x + r.y * r.y) > 0f);
    r.normalize();
    rx = r.x;
    ry = r.y;
    // v is perpendicular to the segment.
    vx = -1f * ry;
    vy = 1f * rx;
    absVx = MathUtils.abs(vx);
    absVy = MathUtils.abs(vy);
    // Separating axis for segment (Gino, p80).
    // |dot(v, p1 - c)| > dot(|v|, h)
    float maxFraction = input.maxFraction;
    // Build a bounding box for the segment.
    final AABB segAABB = aabb;
    // Vec2 t = p1 + maxFraction * (p2 - p1);
    // before inline
    // temp.set(p2).subLocal(p1).mulLocal(maxFraction).addLocal(p1);
    // Vec2.minToOut(p1, temp, segAABB.lowerBound);
    // Vec2.maxToOut(p1, temp, segAABB.upperBound);
    tempx = (p2x - p1x) * maxFraction + p1x;
    tempy = (p2y - p1y) * maxFraction + p1y;
    segAABB.lowerBound.x = p1x < tempx ? p1x : tempx;
    segAABB.lowerBound.y = p1y < tempy ? p1y : tempy;
    segAABB.upperBound.x = p1x > tempx ? p1x : tempx;
    segAABB.upperBound.y = p1y > tempy ? p1y : tempy;
    // end inline
    nodeStackIndex = 0;
    nodeStack[nodeStackIndex++] = m_root;
    while (nodeStackIndex > 0) {
        int node = nodeStack[--nodeStackIndex] = m_root;
        if (node == NULL_NODE) {
            continue;
        }
        final AABB nodeAABB = m_aabb[node];
        if (!AABB.testOverlap(nodeAABB, segAABB)) {
            continue;
        }
        // Separating axis for segment (Gino, p80).
        // |dot(v, p1 - c)| > dot(|v|, h)
        // node.aabb.getCenterToOut(c);
        // node.aabb.getExtentsToOut(h);
        cx = (nodeAABB.lowerBound.x + nodeAABB.upperBound.x) * .5f;
        cy = (nodeAABB.lowerBound.y + nodeAABB.upperBound.y) * .5f;
        hx = (nodeAABB.upperBound.x - nodeAABB.lowerBound.x) * .5f;
        hy = (nodeAABB.upperBound.y - nodeAABB.lowerBound.y) * .5f;
        tempx = p1x - cx;
        tempy = p1y - cy;
        float separation = MathUtils.abs(vx * tempx + vy * tempy) - (absVx * hx + absVy * hy);
        if (separation > 0.0f) {
            continue;
        }
        int child1 = m_child1[node];
        if (child1 == NULL_NODE) {
            subInput.p1.x = p1x;
            subInput.p1.y = p1y;
            subInput.p2.x = p2x;
            subInput.p2.y = p2y;
            subInput.maxFraction = maxFraction;
            float value = callback.raycastCallback(subInput, node);
            if (value == 0.0f) {
                // The client has terminated the ray cast.
                return;
            }
            if (value > 0.0f) {
                // Update segment bounding box.
                maxFraction = value;
                // temp.set(p2).subLocal(p1).mulLocal(maxFraction).addLocal(p1);
                // Vec2.minToOut(p1, temp, segAABB.lowerBound);
                // Vec2.maxToOut(p1, temp, segAABB.upperBound);
                tempx = (p2x - p1x) * maxFraction + p1x;
                tempy = (p2y - p1y) * maxFraction + p1y;
                segAABB.lowerBound.x = p1x < tempx ? p1x : tempx;
                segAABB.lowerBound.y = p1y < tempy ? p1y : tempy;
                segAABB.upperBound.x = p1x > tempx ? p1x : tempx;
                segAABB.upperBound.y = p1y > tempy ? p1y : tempy;
            }
        } else {
            nodeStack[nodeStackIndex++] = child1;
            nodeStack[nodeStackIndex++] = m_child2[node];
        }
    }
}
