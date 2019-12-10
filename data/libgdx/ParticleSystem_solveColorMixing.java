void solveColorMixing(final TimeStep step) {
    // mixes color between contacting particles
    m_colorBuffer.data = requestParticleBuffer(ParticleColor.class, m_colorBuffer.data);
    int colorMixing256 = (int) (256 * m_colorMixingStrength);
    for (int k = 0; k < m_contactCount; k++) {
        final ParticleContact contact = m_contactBuffer[k];
        int a = contact.indexA;
        int b = contact.indexB;
        if ((m_flagsBuffer.data[a] & m_flagsBuffer.data[b] & ParticleType.b2_colorMixingParticle) != 0) {
            ParticleColor colorA = m_colorBuffer.data[a];
            ParticleColor colorB = m_colorBuffer.data[b];
            int dr = (colorMixing256 * (colorB.r - colorA.r)) >> 8;
            int dg = (colorMixing256 * (colorB.g - colorA.g)) >> 8;
            int db = (colorMixing256 * (colorB.b - colorA.b)) >> 8;
            int da = (colorMixing256 * (colorB.a - colorA.a)) >> 8;
            colorA.r += dr;
            colorA.g += dg;
            colorA.b += db;
            colorA.a += da;
            colorB.r -= dr;
            colorB.g -= dg;
            colorB.b -= db;
            colorB.a -= da;
        }
    }
}
