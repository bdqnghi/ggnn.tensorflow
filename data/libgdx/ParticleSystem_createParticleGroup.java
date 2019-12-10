public ParticleGroup createParticleGroup(ParticleGroupDef groupDef) {
    float stride = getParticleStride();
    final Transform identity = tempTransform;
    identity.setIdentity();
    Transform transform = tempTransform2;
    transform.setIdentity();
    int firstIndex = m_count;
    if (groupDef.shape != null) {
        final ParticleDef particleDef = tempParticleDef;
        particleDef.flags = groupDef.flags;
        particleDef.color = groupDef.color;
        particleDef.userData = groupDef.userData;
        Shape shape = groupDef.shape;
        transform.set(groupDef.position, groupDef.angle);
        AABB aabb = temp;
        int childCount = shape.getChildCount();
        for (int childIndex = 0; childIndex < childCount; childIndex++) {
            if (childIndex == 0) {
                shape.computeAABB(aabb, identity, childIndex);
            } else {
                AABB childAABB = temp2;
                shape.computeAABB(childAABB, identity, childIndex);
                aabb.combine(childAABB);
            }
        }
        final float upperBoundY = aabb.upperBound.y;
        final float upperBoundX = aabb.upperBound.x;
        for (float y = MathUtils.floor(aabb.lowerBound.y / stride) * stride; y < upperBoundY; y += stride) {
            for (float x = MathUtils.floor(aabb.lowerBound.x / stride) * stride; x < upperBoundX; x += stride) {
                Vec2 p = tempVec;
                p.x = x;
                p.y = y;
                if (shape.testPoint(identity, p)) {
                    Transform.mulToOut(transform, p, p);
                    particleDef.position.x = p.x;
                    particleDef.position.y = p.y;
                    p.subLocal(groupDef.position);
                    Vec2.crossToOutUnsafe(groupDef.angularVelocity, p, particleDef.velocity);
                    particleDef.velocity.addLocal(groupDef.linearVelocity);
                    createParticle(particleDef);
                }
            }
        }
    }
    int lastIndex = m_count;
    ParticleGroup group = new ParticleGroup();
    group.m_system = this;
    group.m_firstIndex = firstIndex;
    group.m_lastIndex = lastIndex;
    group.m_groupFlags = groupDef.groupFlags;
    group.m_strength = groupDef.strength;
    group.m_userData = groupDef.userData;
    group.m_transform.set(transform);
    group.m_destroyAutomatically = groupDef.destroyAutomatically;
    group.m_prev = null;
    group.m_next = m_groupList;
    if (m_groupList != null) {
        m_groupList.m_prev = group;
    }
    m_groupList = group;
    ++m_groupCount;
    for (int i = firstIndex; i < lastIndex; i++) {
        m_groupBuffer[i] = group;
    }
    updateContacts(true);
    if ((groupDef.flags & k_pairFlags) != 0) {
        for (int k = 0; k < m_contactCount; k++) {
            ParticleContact contact = m_contactBuffer[k];
            int a = contact.indexA;
            int b = contact.indexB;
            if (a > b) {
                int temp = a;
                a = b;
                b = temp;
            }
            if (firstIndex <= a && b < lastIndex) {
                if (m_pairCount >= m_pairCapacity) {
                    int oldCapacity = m_pairCapacity;
                    int newCapacity = m_pairCount != 0 ? 2 * m_pairCount : Settings.minParticleBufferCapacity;
                    m_pairBuffer = BufferUtils.reallocateBuffer(Pair.class, m_pairBuffer, oldCapacity, newCapacity);
                    m_pairCapacity = newCapacity;
                }
                Pair pair = m_pairBuffer[m_pairCount];
                pair.indexA = a;
                pair.indexB = b;
                pair.flags = contact.flags;
                pair.strength = groupDef.strength;
                pair.distance = MathUtils.distance(m_positionBuffer.data[a], m_positionBuffer.data[b]);
                m_pairCount++;
            }
        }
    }
    if ((groupDef.flags & k_triadFlags) != 0) {
        VoronoiDiagram diagram = new VoronoiDiagram(lastIndex - firstIndex);
        for (int i = firstIndex; i < lastIndex; i++) {
            diagram.addGenerator(m_positionBuffer.data[i], i);
        }
        diagram.generate(stride / 2);
        createParticleGroupCallback.system = this;
        createParticleGroupCallback.def = groupDef;
        createParticleGroupCallback.firstIndex = firstIndex;
        diagram.getNodes(createParticleGroupCallback);
    }
    if ((groupDef.groupFlags & ParticleGroupType.b2_solidParticleGroup) != 0) {
        computeDepthForGroup(group);
    }
    return group;
}
