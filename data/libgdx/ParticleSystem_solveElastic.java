void solveElastic(final TimeStep step) {
    float elasticStrength = step.inv_dt * m_elasticStrength;
    for (int k = 0; k < m_triadCount; k++) {
        final Triad triad = m_triadBuffer[k];
        if ((triad.flags & ParticleType.b2_elasticParticle) != 0) {
            int a = triad.indexA;
            int b = triad.indexB;
            int c = triad.indexC;
            final Vec2 oa = triad.pa;
            final Vec2 ob = triad.pb;
            final Vec2 oc = triad.pc;
            final Vec2 pa = m_positionBuffer.data[a];
            final Vec2 pb = m_positionBuffer.data[b];
            final Vec2 pc = m_positionBuffer.data[c];
            final float px = 1f / 3 * (pa.x + pb.x + pc.x);
            final float py = 1f / 3 * (pa.y + pb.y + pc.y);
            float rs = Vec2.cross(oa, pa) + Vec2.cross(ob, pb) + Vec2.cross(oc, pc);
            float rc = Vec2.dot(oa, pa) + Vec2.dot(ob, pb) + Vec2.dot(oc, pc);
            float r2 = rs * rs + rc * rc;
            float invR = r2 == 0 ? Float.MAX_VALUE : MathUtils.sqrt(1f / r2);
            rs *= invR;
            rc *= invR;
            final float strength = elasticStrength * triad.strength;
            final float roax = rc * oa.x - rs * oa.y;
            final float roay = rs * oa.x + rc * oa.y;
            final float robx = rc * ob.x - rs * ob.y;
            final float roby = rs * ob.x + rc * ob.y;
            final float rocx = rc * oc.x - rs * oc.y;
            final float rocy = rs * oc.x + rc * oc.y;
            final Vec2 va = m_velocityBuffer.data[a];
            final Vec2 vb = m_velocityBuffer.data[b];
            final Vec2 vc = m_velocityBuffer.data[c];
            va.x += strength * (roax - (pa.x - px));
            va.y += strength * (roay - (pa.y - py));
            vb.x += strength * (robx - (pb.x - px));
            vb.y += strength * (roby - (pb.y - py));
            vc.x += strength * (rocx - (pc.x - px));
            vc.y += strength * (rocy - (pc.y - py));
        }
    }
}
