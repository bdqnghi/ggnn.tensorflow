public void collide(Manifold manifold, final EdgeShape edgeA, final Transform xfA, final PolygonShape polygonB, final Transform xfB) {
    Transform.mulTransToOutUnsafe(xfA, xfB, m_xf);
    Transform.mulToOutUnsafe(m_xf, polygonB.m_centroid, m_centroidB);
    m_v0 = edgeA.m_vertex0;
    m_v1 = edgeA.m_vertex1;
    m_v2 = edgeA.m_vertex2;
    m_v3 = edgeA.m_vertex3;
    boolean hasVertex0 = edgeA.m_hasVertex0;
    boolean hasVertex3 = edgeA.m_hasVertex3;
    edge1.set(m_v2).subLocal(m_v1);
    edge1.normalize();
    m_normal1.set(edge1.y, -edge1.x);
    float offset1 = Vec2.dot(m_normal1, temp.set(m_centroidB).subLocal(m_v1));
    float offset0 = 0.0f, offset2 = 0.0f;
    boolean convex1 = false, convex2 = false;
    // Is there a preceding edge?
    if (hasVertex0) {
        edge0.set(m_v1).subLocal(m_v0);
        edge0.normalize();
        m_normal0.set(edge0.y, -edge0.x);
        convex1 = Vec2.cross(edge0, edge1) >= 0.0f;
        offset0 = Vec2.dot(m_normal0, temp.set(m_centroidB).subLocal(m_v0));
    }
    // Is there a following edge?
    if (hasVertex3) {
        edge2.set(m_v3).subLocal(m_v2);
        edge2.normalize();
        m_normal2.set(edge2.y, -edge2.x);
        convex2 = Vec2.cross(edge1, edge2) > 0.0f;
        offset2 = Vec2.dot(m_normal2, temp.set(m_centroidB).subLocal(m_v2));
    }
    // Determine front or back collision. Determine collision normal limits.
    if (hasVertex0 && hasVertex3) {
        if (convex1 && convex2) {
            m_front = offset0 >= 0.0f || offset1 >= 0.0f || offset2 >= 0.0f;
            if (m_front) {
                m_normal.x = m_normal1.x;
                m_normal.y = m_normal1.y;
                m_lowerLimit.x = m_normal0.x;
                m_lowerLimit.y = m_normal0.y;
                m_upperLimit.x = m_normal2.x;
                m_upperLimit.y = m_normal2.y;
            } else {
                m_normal.x = -m_normal1.x;
                m_normal.y = -m_normal1.y;
                m_lowerLimit.x = -m_normal1.x;
                m_lowerLimit.y = -m_normal1.y;
                m_upperLimit.x = -m_normal1.x;
                m_upperLimit.y = -m_normal1.y;
            }
        } else if (convex1) {
            m_front = offset0 >= 0.0f || (offset1 >= 0.0f && offset2 >= 0.0f);
            if (m_front) {
                m_normal.x = m_normal1.x;
                m_normal.y = m_normal1.y;
                m_lowerLimit.x = m_normal0.x;
                m_lowerLimit.y = m_normal0.y;
                m_upperLimit.x = m_normal1.x;
                m_upperLimit.y = m_normal1.y;
            } else {
                m_normal.x = -m_normal1.x;
                m_normal.y = -m_normal1.y;
                m_lowerLimit.x = -m_normal2.x;
                m_lowerLimit.y = -m_normal2.y;
                m_upperLimit.x = -m_normal1.x;
                m_upperLimit.y = -m_normal1.y;
            }
        } else if (convex2) {
            m_front = offset2 >= 0.0f || (offset0 >= 0.0f && offset1 >= 0.0f);
            if (m_front) {
                m_normal.x = m_normal1.x;
                m_normal.y = m_normal1.y;
                m_lowerLimit.x = m_normal1.x;
                m_lowerLimit.y = m_normal1.y;
                m_upperLimit.x = m_normal2.x;
                m_upperLimit.y = m_normal2.y;
            } else {
                m_normal.x = -m_normal1.x;
                m_normal.y = -m_normal1.y;
                m_lowerLimit.x = -m_normal1.x;
                m_lowerLimit.y = -m_normal1.y;
                m_upperLimit.x = -m_normal0.x;
                m_upperLimit.y = -m_normal0.y;
            }
        } else {
            m_front = offset0 >= 0.0f && offset1 >= 0.0f && offset2 >= 0.0f;
            if (m_front) {
                m_normal.x = m_normal1.x;
                m_normal.y = m_normal1.y;
                m_lowerLimit.x = m_normal1.x;
                m_lowerLimit.y = m_normal1.y;
                m_upperLimit.x = m_normal1.x;
                m_upperLimit.y = m_normal1.y;
            } else {
                m_normal.x = -m_normal1.x;
                m_normal.y = -m_normal1.y;
                m_lowerLimit.x = -m_normal2.x;
                m_lowerLimit.y = -m_normal2.y;
                m_upperLimit.x = -m_normal0.x;
                m_upperLimit.y = -m_normal0.y;
            }
        }
    } else if (hasVertex0) {
        if (convex1) {
            m_front = offset0 >= 0.0f || offset1 >= 0.0f;
            if (m_front) {
                m_normal.x = m_normal1.x;
                m_normal.y = m_normal1.y;
                m_lowerLimit.x = m_normal0.x;
                m_lowerLimit.y = m_normal0.y;
                m_upperLimit.x = -m_normal1.x;
                m_upperLimit.y = -m_normal1.y;
            } else {
                m_normal.x = -m_normal1.x;
                m_normal.y = -m_normal1.y;
                m_lowerLimit.x = m_normal1.x;
                m_lowerLimit.y = m_normal1.y;
                m_upperLimit.x = -m_normal1.x;
                m_upperLimit.y = -m_normal1.y;
            }
        } else {
            m_front = offset0 >= 0.0f && offset1 >= 0.0f;
            if (m_front) {
                m_normal.x = m_normal1.x;
                m_normal.y = m_normal1.y;
                m_lowerLimit.x = m_normal1.x;
                m_lowerLimit.y = m_normal1.y;
                m_upperLimit.x = -m_normal1.x;
                m_upperLimit.y = -m_normal1.y;
            } else {
                m_normal.x = -m_normal1.x;
                m_normal.y = -m_normal1.y;
                m_lowerLimit.x = m_normal1.x;
                m_lowerLimit.y = m_normal1.y;
                m_upperLimit.x = -m_normal0.x;
                m_upperLimit.y = -m_normal0.y;
            }
        }
    } else if (hasVertex3) {
        if (convex2) {
            m_front = offset1 >= 0.0f || offset2 >= 0.0f;
            if (m_front) {
                m_normal.x = m_normal1.x;
                m_normal.y = m_normal1.y;
                m_lowerLimit.x = -m_normal1.x;
                m_lowerLimit.y = -m_normal1.y;
                m_upperLimit.x = m_normal2.x;
                m_upperLimit.y = m_normal2.y;
            } else {
                m_normal.x = -m_normal1.x;
                m_normal.y = -m_normal1.y;
                m_lowerLimit.x = -m_normal1.x;
                m_lowerLimit.y = -m_normal1.y;
                m_upperLimit.x = m_normal1.x;
                m_upperLimit.y = m_normal1.y;
            }
        } else {
            m_front = offset1 >= 0.0f && offset2 >= 0.0f;
            if (m_front) {
                m_normal.x = m_normal1.x;
                m_normal.y = m_normal1.y;
                m_lowerLimit.x = -m_normal1.x;
                m_lowerLimit.y = -m_normal1.y;
                m_upperLimit.x = m_normal1.x;
                m_upperLimit.y = m_normal1.y;
            } else {
                m_normal.x = -m_normal1.x;
                m_normal.y = -m_normal1.y;
                m_lowerLimit.x = -m_normal2.x;
                m_lowerLimit.y = -m_normal2.y;
                m_upperLimit.x = m_normal1.x;
                m_upperLimit.y = m_normal1.y;
            }
        }
    } else {
        m_front = offset1 >= 0.0f;
        if (m_front) {
            m_normal.x = m_normal1.x;
            m_normal.y = m_normal1.y;
            m_lowerLimit.x = -m_normal1.x;
            m_lowerLimit.y = -m_normal1.y;
            m_upperLimit.x = -m_normal1.x;
            m_upperLimit.y = -m_normal1.y;
        } else {
            m_normal.x = -m_normal1.x;
            m_normal.y = -m_normal1.y;
            m_lowerLimit.x = m_normal1.x;
            m_lowerLimit.y = m_normal1.y;
            m_upperLimit.x = m_normal1.x;
            m_upperLimit.y = m_normal1.y;
        }
    }
    // Get polygonB in frameA
    m_polygonB.count = polygonB.m_count;
    for (int i = 0; i < polygonB.m_count; ++i) {
        Transform.mulToOutUnsafe(m_xf, polygonB.m_vertices[i], m_polygonB.vertices[i]);
        Rot.mulToOutUnsafe(m_xf.q, polygonB.m_normals[i], m_polygonB.normals[i]);
    }
    m_radius = 2.0f * Settings.polygonRadius;
    manifold.pointCount = 0;
    computeEdgeSeparation(edgeAxis);
    // If no valid normal can be found than this edge should not collide.
    if (edgeAxis.type == EPAxis.Type.UNKNOWN) {
        return;
    }
    if (edgeAxis.separation > m_radius) {
        return;
    }
    computePolygonSeparation(polygonAxis);
    if (polygonAxis.type != EPAxis.Type.UNKNOWN && polygonAxis.separation > m_radius) {
        return;
    }
    // Use hysteresis for jitter reduction.
    final float k_relativeTol = 0.98f;
    final float k_absoluteTol = 0.001f;
    EPAxis primaryAxis;
    if (polygonAxis.type == EPAxis.Type.UNKNOWN) {
        primaryAxis = edgeAxis;
    } else if (polygonAxis.separation > k_relativeTol * edgeAxis.separation + k_absoluteTol) {
        primaryAxis = polygonAxis;
    } else {
        primaryAxis = edgeAxis;
    }
    final ClipVertex ie0 = ie[0];
    final ClipVertex ie1 = ie[1];
    if (primaryAxis.type == EPAxis.Type.EDGE_A) {
        manifold.type = Manifold.ManifoldType.FACE_A;
        // Search for the polygon normal that is most anti-parallel to the edge normal.
        int bestIndex = 0;
        float bestValue = Vec2.dot(m_normal, m_polygonB.normals[0]);
        for (int i = 1; i < m_polygonB.count; ++i) {
            float value = Vec2.dot(m_normal, m_polygonB.normals[i]);
            if (value < bestValue) {
                bestValue = value;
                bestIndex = i;
            }
        }
        int i1 = bestIndex;
        int i2 = i1 + 1 < m_polygonB.count ? i1 + 1 : 0;
        ie0.v.set(m_polygonB.vertices[i1]);
        ie0.id.indexA = 0;
        ie0.id.indexB = (byte) i1;
        ie0.id.typeA = (byte) ContactID.Type.FACE.ordinal();
        ie0.id.typeB = (byte) ContactID.Type.VERTEX.ordinal();
        ie1.v.set(m_polygonB.vertices[i2]);
        ie1.id.indexA = 0;
        ie1.id.indexB = (byte) i2;
        ie1.id.typeA = (byte) ContactID.Type.FACE.ordinal();
        ie1.id.typeB = (byte) ContactID.Type.VERTEX.ordinal();
        if (m_front) {
            rf.i1 = 0;
            rf.i2 = 1;
            rf.v1.set(m_v1);
            rf.v2.set(m_v2);
            rf.normal.set(m_normal1);
        } else {
            rf.i1 = 1;
            rf.i2 = 0;
            rf.v1.set(m_v2);
            rf.v2.set(m_v1);
            rf.normal.set(m_normal1).negateLocal();
        }
    } else {
        manifold.type = Manifold.ManifoldType.FACE_B;
        ie0.v.set(m_v1);
        ie0.id.indexA = 0;
        ie0.id.indexB = (byte) primaryAxis.index;
        ie0.id.typeA = (byte) ContactID.Type.VERTEX.ordinal();
        ie0.id.typeB = (byte) ContactID.Type.FACE.ordinal();
        ie1.v.set(m_v2);
        ie1.id.indexA = 0;
        ie1.id.indexB = (byte) primaryAxis.index;
        ie1.id.typeA = (byte) ContactID.Type.VERTEX.ordinal();
        ie1.id.typeB = (byte) ContactID.Type.FACE.ordinal();
        rf.i1 = primaryAxis.index;
        rf.i2 = rf.i1 + 1 < m_polygonB.count ? rf.i1 + 1 : 0;
        rf.v1.set(m_polygonB.vertices[rf.i1]);
        rf.v2.set(m_polygonB.vertices[rf.i2]);
        rf.normal.set(m_polygonB.normals[rf.i1]);
    }
    rf.sideNormal1.set(rf.normal.y, -rf.normal.x);
    rf.sideNormal2.set(rf.sideNormal1).negateLocal();
    rf.sideOffset1 = Vec2.dot(rf.sideNormal1, rf.v1);
    rf.sideOffset2 = Vec2.dot(rf.sideNormal2, rf.v2);
    // Clip incident edge against extruded edge1 side edges.
    int np;
    // Clip to box side 1
    np = clipSegmentToLine(clipPoints1, ie, rf.sideNormal1, rf.sideOffset1, rf.i1);
    if (np < Settings.maxManifoldPoints) {
        return;
    }
    // Clip to negative box side 1
    np = clipSegmentToLine(clipPoints2, clipPoints1, rf.sideNormal2, rf.sideOffset2, rf.i2);
    if (np < Settings.maxManifoldPoints) {
        return;
    }
    // Now clipPoints2 contains the clipped points.
    if (primaryAxis.type == EPAxis.Type.EDGE_A) {
        manifold.localNormal.set(rf.normal);
        manifold.localPoint.set(rf.v1);
    } else {
        manifold.localNormal.set(polygonB.m_normals[rf.i1]);
        manifold.localPoint.set(polygonB.m_vertices[rf.i1]);
    }
    int pointCount = 0;
    for (int i = 0; i < Settings.maxManifoldPoints; ++i) {
        float separation;
        separation = Vec2.dot(rf.normal, temp.set(clipPoints2[i].v).subLocal(rf.v1));
        if (separation <= m_radius) {
            ManifoldPoint cp = manifold.points[pointCount];
            if (primaryAxis.type == EPAxis.Type.EDGE_A) {
                // cp.localPoint = MulT(m_xf, clipPoints2[i].v);
                Transform.mulTransToOutUnsafe(m_xf, clipPoints2[i].v, cp.localPoint);
                cp.id.set(clipPoints2[i].id);
            } else {
                cp.localPoint.set(clipPoints2[i].v);
                cp.id.typeA = clipPoints2[i].id.typeB;
                cp.id.typeB = clipPoints2[i].id.typeA;
                cp.id.indexA = clipPoints2[i].id.indexB;
                cp.id.indexB = clipPoints2[i].id.indexA;
            }
            ++pointCount;
        }
    }
    manifold.pointCount = pointCount;
}
