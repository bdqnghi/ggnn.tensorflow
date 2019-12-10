private void drawParticleSystem(ParticleSystem system) {
    boolean wireframe = (m_debugDraw.getFlags() & DebugDraw.e_wireframeDrawingBit) != 0;
    int particleCount = system.getParticleCount();
    if (particleCount != 0) {
        float particleRadius = system.getParticleRadius();
        Vec2[] positionBuffer = system.getParticlePositionBuffer();
        ParticleColor[] colorBuffer = null;
        if (system.m_colorBuffer.data != null) {
            colorBuffer = system.getParticleColorBuffer();
        }
        if (wireframe) {
            m_debugDraw.drawParticlesWireframe(positionBuffer, particleRadius, colorBuffer, particleCount);
        } else {
            m_debugDraw.drawParticles(positionBuffer, particleRadius, colorBuffer, particleCount);
        }
    }
}
