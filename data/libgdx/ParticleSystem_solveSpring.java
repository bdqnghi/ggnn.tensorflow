void solveSpring(final TimeStep step) {
    float springStrength = step.inv_dt * m_springStrength;
    for (int k = 0; k < m_pairCount; k++) {
        final Pair pair = m_pairBuffer[k];
        if ((pair.flags & ParticleType.b2_springParticle) != 0) {
            int a = pair.indexA;
            int b = pair.indexB;
            final Vec2 pa = m_positionBuffer.data[a];
            final Vec2 pb = m_positionBuffer.data[b];
            final float dx = pb.x - pa.x;
            final float dy = pb.y - pa.y;
            float r0 = pair.distance;
            float r1 = MathUtils.sqrt(dx * dx + dy * dy);
            if (r1 == 0)
                r1 = Float.MAX_VALUE;
            float strength = springStrength * pair.strength;
            final float fx = strength * (r0 - r1) / r1 * dx;
            final float fy = strength * (r0 - r1) / r1 * dy;
            final Vec2 va = m_velocityBuffer.data[a];
            final Vec2 vb = m_velocityBuffer.data[b];
            va.x -= fx;
            va.y -= fy;
            vb.x += fx;
            vb.y += fy;
        }
    }
}
