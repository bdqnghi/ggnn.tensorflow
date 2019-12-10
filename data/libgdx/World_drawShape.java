private void drawShape(Fixture fixture, Transform xf, Color3f color, boolean wireframe) {
    switch(fixture.getType()) {
        case CIRCLE:
            {
                CircleShape circle = (CircleShape) fixture.getShape();
                // Vec2 center = Mul(xf, circle.m_p);
                Transform.mulToOutUnsafe(xf, circle.m_p, center);
                float radius = circle.m_radius;
                xf.q.getXAxis(axis);
                if (fixture.getUserData() != null && fixture.getUserData().equals(LIQUID_INT)) {
                    Body b = fixture.getBody();
                    liquidOffset.set(b.m_linearVelocity);
                    float linVelLength = b.m_linearVelocity.length();
                    if (averageLinearVel == -1) {
                        averageLinearVel = linVelLength;
                    } else {
                        averageLinearVel = .98f * averageLinearVel + .02f * linVelLength;
                    }
                    liquidOffset.mulLocal(liquidLength / averageLinearVel / 2);
                    circCenterMoved.set(center).addLocal(liquidOffset);
                    center.subLocal(liquidOffset);
                    m_debugDraw.drawSegment(center, circCenterMoved, liquidColor);
                    return;
                }
                if (wireframe) {
                    m_debugDraw.drawCircle(center, radius, axis, color);
                } else {
                    m_debugDraw.drawSolidCircle(center, radius, axis, color);
                }
            }
            break;
        case POLYGON:
            {
                PolygonShape poly = (PolygonShape) fixture.getShape();
                int vertexCount = poly.m_count;
                assert (vertexCount <= Settings.maxPolygonVertices);
                Vec2[] vertices = tlvertices.get(Settings.maxPolygonVertices);
                for (int i = 0; i < vertexCount; ++i) {
                    // vertices[i] = Mul(xf, poly.m_vertices[i]);
                    Transform.mulToOutUnsafe(xf, poly.m_vertices[i], vertices[i]);
                }
                if (wireframe) {
                    m_debugDraw.drawPolygon(vertices, vertexCount, color);
                } else {
                    m_debugDraw.drawSolidPolygon(vertices, vertexCount, color);
                }
            }
            break;
        case EDGE:
            {
                EdgeShape edge = (EdgeShape) fixture.getShape();
                Transform.mulToOutUnsafe(xf, edge.m_vertex1, v1);
                Transform.mulToOutUnsafe(xf, edge.m_vertex2, v2);
                m_debugDraw.drawSegment(v1, v2, color);
            }
            break;
        case CHAIN:
            {
                ChainShape chain = (ChainShape) fixture.getShape();
                int count = chain.m_count;
                Vec2[] vertices = chain.m_vertices;
                Transform.mulToOutUnsafe(xf, vertices[0], v1);
                for (int i = 1; i < count; ++i) {
                    Transform.mulToOutUnsafe(xf, vertices[i], v2);
                    m_debugDraw.drawSegment(v1, v2, color);
                    m_debugDraw.drawCircle(v1, 0.05f, color);
                    v1.set(v2);
                }
            }
            break;
        default:
            break;
    }
}
