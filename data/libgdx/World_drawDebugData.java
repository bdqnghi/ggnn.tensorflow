/**
 * Call this to draw shapes and other debug draw data.
 */
public void drawDebugData() {
    if (m_debugDraw == null) {
        return;
    }
    int flags = m_debugDraw.getFlags();
    boolean wireframe = (flags & DebugDraw.e_wireframeDrawingBit) != 0;
    if ((flags & DebugDraw.e_shapeBit) != 0) {
        for (Body b = m_bodyList; b != null; b = b.getNext()) {
            xf.set(b.getTransform());
            for (Fixture f = b.getFixtureList(); f != null; f = f.getNext()) {
                if (b.isActive() == false) {
                    color.set(0.5f, 0.5f, 0.3f);
                    drawShape(f, xf, color, wireframe);
                } else if (b.getType() == BodyType.STATIC) {
                    color.set(0.5f, 0.9f, 0.3f);
                    drawShape(f, xf, color, wireframe);
                } else if (b.getType() == BodyType.KINEMATIC) {
                    color.set(0.5f, 0.5f, 0.9f);
                    drawShape(f, xf, color, wireframe);
                } else if (b.isAwake() == false) {
                    color.set(0.5f, 0.5f, 0.5f);
                    drawShape(f, xf, color, wireframe);
                } else {
                    color.set(0.9f, 0.7f, 0.7f);
                    drawShape(f, xf, color, wireframe);
                }
            }
        }
        drawParticleSystem(m_particleSystem);
    }
    if ((flags & DebugDraw.e_jointBit) != 0) {
        for (Joint j = m_jointList; j != null; j = j.getNext()) {
            drawJoint(j);
        }
    }
    if ((flags & DebugDraw.e_pairBit) != 0) {
        color.set(0.3f, 0.9f, 0.9f);
        for (Contact c = m_contactManager.m_contactList; c != null; c = c.getNext()) {
            Fixture fixtureA = c.getFixtureA();
            Fixture fixtureB = c.getFixtureB();
            fixtureA.getAABB(c.getChildIndexA()).getCenterToOut(cA);
            fixtureB.getAABB(c.getChildIndexB()).getCenterToOut(cB);
            m_debugDraw.drawSegment(cA, cB, color);
        }
    }
    if ((flags & DebugDraw.e_aabbBit) != 0) {
        color.set(0.9f, 0.3f, 0.9f);
        for (Body b = m_bodyList; b != null; b = b.getNext()) {
            if (b.isActive() == false) {
                continue;
            }
            for (Fixture f = b.getFixtureList(); f != null; f = f.getNext()) {
                for (int i = 0; i < f.m_proxyCount; ++i) {
                    FixtureProxy proxy = f.m_proxies[i];
                    AABB aabb = m_contactManager.m_broadPhase.getFatAABB(proxy.proxyId);
                    if (aabb != null) {
                        Vec2[] vs = avs.get(4);
                        vs[0].set(aabb.lowerBound.x, aabb.lowerBound.y);
                        vs[1].set(aabb.upperBound.x, aabb.lowerBound.y);
                        vs[2].set(aabb.upperBound.x, aabb.upperBound.y);
                        vs[3].set(aabb.lowerBound.x, aabb.upperBound.y);
                        m_debugDraw.drawPolygon(vs, 4, color);
                    }
                }
            }
        }
    }
    if ((flags & DebugDraw.e_centerOfMassBit) != 0) {
        for (Body b = m_bodyList; b != null; b = b.getNext()) {
            xf.set(b.getTransform());
            xf.p.set(b.getWorldCenter());
            m_debugDraw.drawTransform(xf);
        }
    }
    if ((flags & DebugDraw.e_dynamicTreeBit) != 0) {
        m_contactManager.m_broadPhase.drawTree(m_debugDraw);
    }
    m_debugDraw.flush();
}
