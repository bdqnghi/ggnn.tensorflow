@Override
public boolean reportFixture(Fixture fixture) {
    if (fixture.isSensor()) {
        return true;
    }
    final Shape shape = fixture.getShape();
    Body body = fixture.getBody();
    int childCount = shape.getChildCount();
    for (int childIndex = 0; childIndex < childCount; childIndex++) {
        AABB aabb = fixture.getAABB(childIndex);
        final float aabblowerBoundx = aabb.lowerBound.x - system.m_particleDiameter;
        final float aabblowerBoundy = aabb.lowerBound.y - system.m_particleDiameter;
        final float aabbupperBoundx = aabb.upperBound.x + system.m_particleDiameter;
        final float aabbupperBoundy = aabb.upperBound.y + system.m_particleDiameter;
        int firstProxy = lowerBound(system.m_proxyBuffer, system.m_proxyCount, computeTag(system.m_inverseDiameter * aabblowerBoundx, system.m_inverseDiameter * aabblowerBoundy));
        int lastProxy = upperBound(system.m_proxyBuffer, system.m_proxyCount, computeTag(system.m_inverseDiameter * aabbupperBoundx, system.m_inverseDiameter * aabbupperBoundy));
        for (int proxy = firstProxy; proxy != lastProxy; ++proxy) {
            int a = system.m_proxyBuffer[proxy].index;
            Vec2 ap = system.m_positionBuffer.data[a];
            if (aabblowerBoundx <= ap.x && ap.x <= aabbupperBoundx && aabblowerBoundy <= ap.y && ap.y <= aabbupperBoundy) {
                Vec2 av = system.m_velocityBuffer.data[a];
                final Vec2 temp = tempVec;
                Transform.mulTransToOutUnsafe(body.m_xf0, ap, temp);
                Transform.mulToOutUnsafe(body.m_xf, temp, input.p1);
                input.p2.x = ap.x + step.dt * av.x;
                input.p2.y = ap.y + step.dt * av.y;
                input.maxFraction = 1;
                if (fixture.raycast(output, input, childIndex)) {
                    final Vec2 p = tempVec;
                    p.x = (1 - output.fraction) * input.p1.x + output.fraction * input.p2.x + Settings.linearSlop * output.normal.x;
                    p.y = (1 - output.fraction) * input.p1.y + output.fraction * input.p2.y + Settings.linearSlop * output.normal.y;
                    final float vx = step.inv_dt * (p.x - ap.x);
                    final float vy = step.inv_dt * (p.y - ap.y);
                    av.x = vx;
                    av.y = vy;
                    final float particleMass = system.getParticleMass();
                    final float ax = particleMass * (av.x - vx);
                    final float ay = particleMass * (av.y - vy);
                    Vec2 b = output.normal;
                    final float fdn = ax * b.x + ay * b.y;
                    final Vec2 f = tempVec2;
                    f.x = fdn * b.x;
                    f.y = fdn * b.y;
                    body.applyLinearImpulse(f, p, true);
                }
            }
        }
    }
    return true;
}
