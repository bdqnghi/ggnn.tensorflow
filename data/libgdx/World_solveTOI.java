private void solveTOI(final TimeStep step) {
    final Island island = toiIsland;
    island.init(2 * Settings.maxTOIContacts, Settings.maxTOIContacts, 0, m_contactManager.m_contactListener);
    if (m_stepComplete) {
        for (Body b = m_bodyList; b != null; b = b.m_next) {
            b.m_flags &= ~Body.e_islandFlag;
            b.m_sweep.alpha0 = 0.0f;
        }
        for (Contact c = m_contactManager.m_contactList; c != null; c = c.m_next) {
            // Invalidate TOI
            c.m_flags &= ~(Contact.TOI_FLAG | Contact.ISLAND_FLAG);
            c.m_toiCount = 0;
            c.m_toi = 1.0f;
        }
    }
    // Find TOI events and solve them.
    for (; ; ) {
        // Find the first TOI.
        Contact minContact = null;
        float minAlpha = 1.0f;
        for (Contact c = m_contactManager.m_contactList; c != null; c = c.m_next) {
            // Is this contact disabled?
            if (c.isEnabled() == false) {
                continue;
            }
            // Prevent excessive sub-stepping.
            if (c.m_toiCount > Settings.maxSubSteps) {
                continue;
            }
            float alpha = 1.0f;
            if ((c.m_flags & Contact.TOI_FLAG) != 0) {
                // This contact has a valid cached TOI.
                alpha = c.m_toi;
            } else {
                Fixture fA = c.getFixtureA();
                Fixture fB = c.getFixtureB();
                // Is there a sensor?
                if (fA.isSensor() || fB.isSensor()) {
                    continue;
                }
                Body bA = fA.getBody();
                Body bB = fB.getBody();
                BodyType typeA = bA.m_type;
                BodyType typeB = bB.m_type;
                assert (typeA == BodyType.DYNAMIC || typeB == BodyType.DYNAMIC);
                boolean activeA = bA.isAwake() && typeA != BodyType.STATIC;
                boolean activeB = bB.isAwake() && typeB != BodyType.STATIC;
                // Is at least one body active (awake and dynamic or kinematic)?
                if (activeA == false && activeB == false) {
                    continue;
                }
                boolean collideA = bA.isBullet() || typeA != BodyType.DYNAMIC;
                boolean collideB = bB.isBullet() || typeB != BodyType.DYNAMIC;
                // Are these two non-bullet dynamic bodies?
                if (collideA == false && collideB == false) {
                    continue;
                }
                // Compute the TOI for this contact.
                // Put the sweeps onto the same time interval.
                float alpha0 = bA.m_sweep.alpha0;
                if (bA.m_sweep.alpha0 < bB.m_sweep.alpha0) {
                    alpha0 = bB.m_sweep.alpha0;
                    bA.m_sweep.advance(alpha0);
                } else if (bB.m_sweep.alpha0 < bA.m_sweep.alpha0) {
                    alpha0 = bA.m_sweep.alpha0;
                    bB.m_sweep.advance(alpha0);
                }
                assert (alpha0 < 1.0f);
                int indexA = c.getChildIndexA();
                int indexB = c.getChildIndexB();
                // Compute the time of impact in interval [0, minTOI]
                final TOIInput input = toiInput;
                input.proxyA.set(fA.getShape(), indexA);
                input.proxyB.set(fB.getShape(), indexB);
                input.sweepA.set(bA.m_sweep);
                input.sweepB.set(bB.m_sweep);
                input.tMax = 1.0f;
                pool.getTimeOfImpact().timeOfImpact(toiOutput, input);
                // Beta is the fraction of the remaining portion of the .
                float beta = toiOutput.t;
                if (toiOutput.state == TOIOutputState.TOUCHING) {
                    alpha = MathUtils.min(alpha0 + (1.0f - alpha0) * beta, 1.0f);
                } else {
                    alpha = 1.0f;
                }
                c.m_toi = alpha;
                c.m_flags |= Contact.TOI_FLAG;
            }
            if (alpha < minAlpha) {
                // This is the minimum TOI found so far.
                minContact = c;
                minAlpha = alpha;
            }
        }
        if (minContact == null || 1.0f - 10.0f * Settings.EPSILON < minAlpha) {
            // No more TOI events. Done!
            m_stepComplete = true;
            break;
        }
        // Advance the bodies to the TOI.
        Fixture fA = minContact.getFixtureA();
        Fixture fB = minContact.getFixtureB();
        Body bA = fA.getBody();
        Body bB = fB.getBody();
        backup1.set(bA.m_sweep);
        backup2.set(bB.m_sweep);
        bA.advance(minAlpha);
        bB.advance(minAlpha);
        // The TOI contact likely has some new contact points.
        minContact.update(m_contactManager.m_contactListener);
        minContact.m_flags &= ~Contact.TOI_FLAG;
        ++minContact.m_toiCount;
        // Is the contact solid?
        if (minContact.isEnabled() == false || minContact.isTouching() == false) {
            // Restore the sweeps.
            minContact.setEnabled(false);
            bA.m_sweep.set(backup1);
            bB.m_sweep.set(backup2);
            bA.synchronizeTransform();
            bB.synchronizeTransform();
            continue;
        }
        bA.setAwake(true);
        bB.setAwake(true);
        // Build the island
        island.clear();
        island.add(bA);
        island.add(bB);
        island.add(minContact);
        bA.m_flags |= Body.e_islandFlag;
        bB.m_flags |= Body.e_islandFlag;
        minContact.m_flags |= Contact.ISLAND_FLAG;
        // Get contacts on bodyA and bodyB.
        tempBodies[0] = bA;
        tempBodies[1] = bB;
        for (int i = 0; i < 2; ++i) {
            Body body = tempBodies[i];
            if (body.m_type == BodyType.DYNAMIC) {
                for (ContactEdge ce = body.m_contactList; ce != null; ce = ce.next) {
                    if (island.m_bodyCount == island.m_bodyCapacity) {
                        break;
                    }
                    if (island.m_contactCount == island.m_contactCapacity) {
                        break;
                    }
                    Contact contact = ce.contact;
                    // Has this contact already been added to the island?
                    if ((contact.m_flags & Contact.ISLAND_FLAG) != 0) {
                        continue;
                    }
                    // Only add static, kinematic, or bullet bodies.
                    Body other = ce.other;
                    if (other.m_type == BodyType.DYNAMIC && body.isBullet() == false && other.isBullet() == false) {
                        continue;
                    }
                    // Skip sensors.
                    boolean sensorA = contact.m_fixtureA.m_isSensor;
                    boolean sensorB = contact.m_fixtureB.m_isSensor;
                    if (sensorA || sensorB) {
                        continue;
                    }
                    // Tentatively advance the body to the TOI.
                    backup1.set(other.m_sweep);
                    if ((other.m_flags & Body.e_islandFlag) == 0) {
                        other.advance(minAlpha);
                    }
                    // Update the contact points
                    contact.update(m_contactManager.m_contactListener);
                    // Was the contact disabled by the user?
                    if (contact.isEnabled() == false) {
                        other.m_sweep.set(backup1);
                        other.synchronizeTransform();
                        continue;
                    }
                    // Are there contact points?
                    if (contact.isTouching() == false) {
                        other.m_sweep.set(backup1);
                        other.synchronizeTransform();
                        continue;
                    }
                    // Add the contact to the island
                    contact.m_flags |= Contact.ISLAND_FLAG;
                    island.add(contact);
                    // Has the other body already been added to the island?
                    if ((other.m_flags & Body.e_islandFlag) != 0) {
                        continue;
                    }
                    // Add the other body to the island.
                    other.m_flags |= Body.e_islandFlag;
                    if (other.m_type != BodyType.STATIC) {
                        other.setAwake(true);
                    }
                    island.add(other);
                }
            }
        }
        subStep.dt = (1.0f - minAlpha) * step.dt;
        subStep.inv_dt = 1.0f / subStep.dt;
        subStep.dtRatio = 1.0f;
        subStep.positionIterations = 20;
        subStep.velocityIterations = step.velocityIterations;
        subStep.warmStarting = false;
        island.solveTOI(subStep, bA.m_islandIndex, bB.m_islandIndex);
        // Reset island flags and synchronize broad-phase proxies.
        for (int i = 0; i < island.m_bodyCount; ++i) {
            Body body = island.m_bodies[i];
            body.m_flags &= ~Body.e_islandFlag;
            if (body.m_type != BodyType.DYNAMIC) {
                continue;
            }
            body.synchronizeFixtures();
            // Invalidate all contact TOIs on this displaced body.
            for (ContactEdge ce = body.m_contactList; ce != null; ce = ce.next) {
                ce.contact.m_flags &= ~(Contact.TOI_FLAG | Contact.ISLAND_FLAG);
            }
        }
        // Commit fixture proxy movements to the broad-phase so that new contacts are created.
        // Also, some contacts can be destroyed.
        m_contactManager.findNewContacts();
        if (m_subStepping) {
            m_stepComplete = false;
            break;
        }
    }
}
