private void solve(TimeStep step) {
    m_profile.solveInit.startAccum();
    m_profile.solveVelocity.startAccum();
    m_profile.solvePosition.startAccum();
    // update previous transforms
    for (Body b = m_bodyList; b != null; b = b.m_next) {
        b.m_xf0.set(b.m_xf);
    }
    // Size the island for the worst case.
    island.init(m_bodyCount, m_contactManager.m_contactCount, m_jointCount, m_contactManager.m_contactListener);
    // Clear all the island flags.
    for (Body b = m_bodyList; b != null; b = b.m_next) {
        b.m_flags &= ~Body.e_islandFlag;
    }
    for (Contact c = m_contactManager.m_contactList; c != null; c = c.m_next) {
        c.m_flags &= ~Contact.ISLAND_FLAG;
    }
    for (Joint j = m_jointList; j != null; j = j.m_next) {
        j.m_islandFlag = false;
    }
    // Build and simulate all awake islands.
    int stackSize = m_bodyCount;
    if (stack.length < stackSize) {
        stack = new Body[stackSize];
    }
    for (Body seed = m_bodyList; seed != null; seed = seed.m_next) {
        if ((seed.m_flags & Body.e_islandFlag) == Body.e_islandFlag) {
            continue;
        }
        if (seed.isAwake() == false || seed.isActive() == false) {
            continue;
        }
        // The seed can be dynamic or kinematic.
        if (seed.getType() == BodyType.STATIC) {
            continue;
        }
        // Reset island and stack.
        island.clear();
        int stackCount = 0;
        stack[stackCount++] = seed;
        seed.m_flags |= Body.e_islandFlag;
        // Perform a depth first search (DFS) on the constraint graph.
        while (stackCount > 0) {
            // Grab the next body off the stack and add it to the island.
            Body b = stack[--stackCount];
            assert (b.isActive() == true);
            island.add(b);
            // Make sure the body is awake.
            b.setAwake(true);
            // propagate islands across static bodies.
            if (b.getType() == BodyType.STATIC) {
                continue;
            }
            // Search all contacts connected to this body.
            for (ContactEdge ce = b.m_contactList; ce != null; ce = ce.next) {
                Contact contact = ce.contact;
                // Has this contact already been added to an island?
                if ((contact.m_flags & Contact.ISLAND_FLAG) == Contact.ISLAND_FLAG) {
                    continue;
                }
                // Is this contact solid and touching?
                if (contact.isEnabled() == false || contact.isTouching() == false) {
                    continue;
                }
                // Skip sensors.
                boolean sensorA = contact.m_fixtureA.m_isSensor;
                boolean sensorB = contact.m_fixtureB.m_isSensor;
                if (sensorA || sensorB) {
                    continue;
                }
                island.add(contact);
                contact.m_flags |= Contact.ISLAND_FLAG;
                Body other = ce.other;
                // Was the other body already added to this island?
                if ((other.m_flags & Body.e_islandFlag) == Body.e_islandFlag) {
                    continue;
                }
                assert (stackCount < stackSize);
                stack[stackCount++] = other;
                other.m_flags |= Body.e_islandFlag;
            }
            // Search all joints connect to this body.
            for (JointEdge je = b.m_jointList; je != null; je = je.next) {
                if (je.joint.m_islandFlag == true) {
                    continue;
                }
                Body other = je.other;
                // Don't simulate joints connected to inactive bodies.
                if (other.isActive() == false) {
                    continue;
                }
                island.add(je.joint);
                je.joint.m_islandFlag = true;
                if ((other.m_flags & Body.e_islandFlag) == Body.e_islandFlag) {
                    continue;
                }
                assert (stackCount < stackSize);
                stack[stackCount++] = other;
                other.m_flags |= Body.e_islandFlag;
            }
        }
        island.solve(m_profile, step, m_gravity, m_allowSleep);
        // Post solve cleanup.
        for (int i = 0; i < island.m_bodyCount; ++i) {
            // Allow static bodies to participate in other islands.
            Body b = island.m_bodies[i];
            if (b.getType() == BodyType.STATIC) {
                b.m_flags &= ~Body.e_islandFlag;
            }
        }
    }
    m_profile.solveInit.endAccum();
    m_profile.solveVelocity.endAccum();
    m_profile.solvePosition.endAccum();
    broadphaseTimer.reset();
    // Synchronize fixtures, check for out of range bodies.
    for (Body b = m_bodyList; b != null; b = b.getNext()) {
        // If a body was not in an island then it did not move.
        if ((b.m_flags & Body.e_islandFlag) == 0) {
            continue;
        }
        if (b.getType() == BodyType.STATIC) {
            continue;
        }
        // Update fixtures (for broad-phase).
        b.synchronizeFixtures();
    }
    // Look for new contacts.
    m_contactManager.findNewContacts();
    m_profile.broadphase.record(broadphaseTimer.getMilliseconds());
}
