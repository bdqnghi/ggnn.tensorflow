public void initialize(ContactPositionConstraint pc, Transform xfA, Transform xfB, int index) {
    assert (pc.pointCount > 0);
    final Rot xfAq = xfA.q;
    final Rot xfBq = xfB.q;
    final Vec2 pcLocalPointsI = pc.localPoints[index];
    switch(pc.type) {
        case CIRCLES:
            {
                // Transform.mulToOutUnsafe(xfA, pc.localPoint, pointA);
                // Transform.mulToOutUnsafe(xfB, pc.localPoints[0], pointB);
                // normal.set(pointB).subLocal(pointA);
                // normal.normalize();
                // 
                // point.set(pointA).addLocal(pointB).mulLocal(.5f);
                // temp.set(pointB).subLocal(pointA);
                // separation = Vec2.dot(temp, normal) - pc.radiusA - pc.radiusB;
                final Vec2 plocalPoint = pc.localPoint;
                final Vec2 pLocalPoints0 = pc.localPoints[0];
                final float pointAx = (xfAq.c * plocalPoint.x - xfAq.s * plocalPoint.y) + xfA.p.x;
                final float pointAy = (xfAq.s * plocalPoint.x + xfAq.c * plocalPoint.y) + xfA.p.y;
                final float pointBx = (xfBq.c * pLocalPoints0.x - xfBq.s * pLocalPoints0.y) + xfB.p.x;
                final float pointBy = (xfBq.s * pLocalPoints0.x + xfBq.c * pLocalPoints0.y) + xfB.p.y;
                normal.x = pointBx - pointAx;
                normal.y = pointBy - pointAy;
                normal.normalize();
                point.x = (pointAx + pointBx) * .5f;
                point.y = (pointAy + pointBy) * .5f;
                final float tempx = pointBx - pointAx;
                final float tempy = pointBy - pointAy;
                separation = tempx * normal.x + tempy * normal.y - pc.radiusA - pc.radiusB;
                break;
            }
        case FACE_A:
            {
                // Rot.mulToOutUnsafe(xfAq, pc.localNormal, normal);
                // Transform.mulToOutUnsafe(xfA, pc.localPoint, planePoint);
                // 
                // Transform.mulToOutUnsafe(xfB, pc.localPoints[index], clipPoint);
                // temp.set(clipPoint).subLocal(planePoint);
                // separation = Vec2.dot(temp, normal) - pc.radiusA - pc.radiusB;
                // point.set(clipPoint);
                final Vec2 pcLocalNormal = pc.localNormal;
                final Vec2 pcLocalPoint = pc.localPoint;
                normal.x = xfAq.c * pcLocalNormal.x - xfAq.s * pcLocalNormal.y;
                normal.y = xfAq.s * pcLocalNormal.x + xfAq.c * pcLocalNormal.y;
                final float planePointx = (xfAq.c * pcLocalPoint.x - xfAq.s * pcLocalPoint.y) + xfA.p.x;
                final float planePointy = (xfAq.s * pcLocalPoint.x + xfAq.c * pcLocalPoint.y) + xfA.p.y;
                final float clipPointx = (xfBq.c * pcLocalPointsI.x - xfBq.s * pcLocalPointsI.y) + xfB.p.x;
                final float clipPointy = (xfBq.s * pcLocalPointsI.x + xfBq.c * pcLocalPointsI.y) + xfB.p.y;
                final float tempx = clipPointx - planePointx;
                final float tempy = clipPointy - planePointy;
                separation = tempx * normal.x + tempy * normal.y - pc.radiusA - pc.radiusB;
                point.x = clipPointx;
                point.y = clipPointy;
                break;
            }
        case FACE_B:
            {
                // Rot.mulToOutUnsafe(xfBq, pc.localNormal, normal);
                // Transform.mulToOutUnsafe(xfB, pc.localPoint, planePoint);
                // 
                // Transform.mulToOutUnsafe(xfA, pcLocalPointsI, clipPoint);
                // temp.set(clipPoint).subLocal(planePoint);
                // separation = Vec2.dot(temp, normal) - pc.radiusA - pc.radiusB;
                // point.set(clipPoint);
                // 
                // // Ensure normal points from A to B
                // normal.negateLocal();
                final Vec2 pcLocalNormal = pc.localNormal;
                final Vec2 pcLocalPoint = pc.localPoint;
                normal.x = xfBq.c * pcLocalNormal.x - xfBq.s * pcLocalNormal.y;
                normal.y = xfBq.s * pcLocalNormal.x + xfBq.c * pcLocalNormal.y;
                final float planePointx = (xfBq.c * pcLocalPoint.x - xfBq.s * pcLocalPoint.y) + xfB.p.x;
                final float planePointy = (xfBq.s * pcLocalPoint.x + xfBq.c * pcLocalPoint.y) + xfB.p.y;
                final float clipPointx = (xfAq.c * pcLocalPointsI.x - xfAq.s * pcLocalPointsI.y) + xfA.p.x;
                final float clipPointy = (xfAq.s * pcLocalPointsI.x + xfAq.c * pcLocalPointsI.y) + xfA.p.y;
                final float tempx = clipPointx - planePointx;
                final float tempy = clipPointy - planePointy;
                separation = tempx * normal.x + tempy * normal.y - pc.radiusA - pc.radiusB;
                point.x = clipPointx;
                point.y = clipPointy;
                normal.x *= -1;
                normal.y *= -1;
            }
            break;
    }
}
