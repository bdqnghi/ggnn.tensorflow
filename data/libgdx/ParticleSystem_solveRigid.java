void solveRigid(final TimeStep step) {
    for (ParticleGroup group = m_groupList; group != null; group = group.getNext()) {
        if ((group.m_groupFlags & ParticleGroupType.b2_rigidParticleGroup) != 0) {
            group.updateStatistics();
            Vec2 temp = tempVec;
            Vec2 cross = tempVec2;
            Rot rotation = tempRot;
            rotation.set(step.dt * group.m_angularVelocity);
            Rot.mulToOutUnsafe(rotation, group.m_center, cross);
            temp.set(group.m_linearVelocity).mulLocal(step.dt).addLocal(group.m_center).subLocal(cross);
            tempXf.p.set(temp);
            tempXf.q.set(rotation);
            Transform.mulToOut(tempXf, group.m_transform, group.m_transform);
            final Transform velocityTransform = tempXf2;
            velocityTransform.p.x = step.inv_dt * tempXf.p.x;
            velocityTransform.p.y = step.inv_dt * tempXf.p.y;
            velocityTransform.q.s = step.inv_dt * tempXf.q.s;
            velocityTransform.q.c = step.inv_dt * (tempXf.q.c - 1);
            for (int i = group.m_firstIndex; i < group.m_lastIndex; i++) {
                Transform.mulToOutUnsafe(velocityTransform, m_positionBuffer.data[i], m_velocityBuffer.data[i]);
            }
        }
    }
}
