public void callback(int a, int b, int c) {
    // Create a triad if it will contain particles from both groups.
    int countA = ((a < groupB.m_firstIndex) ? 1 : 0) + ((b < groupB.m_firstIndex) ? 1 : 0) + ((c < groupB.m_firstIndex) ? 1 : 0);
    if (countA > 0 && countA < 3) {
        int af = system.m_flagsBuffer.data[a];
        int bf = system.m_flagsBuffer.data[b];
        int cf = system.m_flagsBuffer.data[c];
        if ((af & bf & cf & k_triadFlags) != 0) {
            final Vec2 pa = system.m_positionBuffer.data[a];
            final Vec2 pb = system.m_positionBuffer.data[b];
            final Vec2 pc = system.m_positionBuffer.data[c];
            final float dabx = pa.x - pb.x;
            final float daby = pa.y - pb.y;
            final float dbcx = pb.x - pc.x;
            final float dbcy = pb.y - pc.y;
            final float dcax = pc.x - pa.x;
            final float dcay = pc.y - pa.y;
            float maxDistanceSquared = Settings.maxTriadDistanceSquared * system.m_squaredDiameter;
            if (dabx * dabx + daby * daby < maxDistanceSquared && dbcx * dbcx + dbcy * dbcy < maxDistanceSquared && dcax * dcax + dcay * dcay < maxDistanceSquared) {
                if (system.m_triadCount >= system.m_triadCapacity) {
                    int oldCapacity = system.m_triadCapacity;
                    int newCapacity = system.m_triadCount != 0 ? 2 * system.m_triadCount : Settings.minParticleBufferCapacity;
                    system.m_triadBuffer = BufferUtils.reallocateBuffer(Triad.class, system.m_triadBuffer, oldCapacity, newCapacity);
                    system.m_triadCapacity = newCapacity;
                }
                Triad triad = system.m_triadBuffer[system.m_triadCount];
                triad.indexA = a;
                triad.indexB = b;
                triad.indexC = c;
                triad.flags = af | bf | cf;
                triad.strength = MathUtils.min(groupA.m_strength, groupB.m_strength);
                final float midPointx = (float) 1 / 3 * (pa.x + pb.x + pc.x);
                final float midPointy = (float) 1 / 3 * (pa.y + pb.y + pc.y);
                triad.pa.x = pa.x - midPointx;
                triad.pa.y = pa.y - midPointy;
                triad.pb.x = pb.x - midPointx;
                triad.pb.y = pb.y - midPointy;
                triad.pc.x = pc.x - midPointx;
                triad.pc.y = pc.y - midPointy;
                triad.ka = -(dcax * dabx + dcay * daby);
                triad.kb = -(dabx * dbcx + daby * dbcy);
                triad.kc = -(dbcx * dcax + dbcy * dcay);
                triad.s = Vec2.cross(pa, pb) + Vec2.cross(pb, pc) + Vec2.cross(pc, pa);
                system.m_triadCount++;
            }
        }
    }
}
