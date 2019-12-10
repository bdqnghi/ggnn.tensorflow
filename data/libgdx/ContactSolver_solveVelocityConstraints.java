public final void solveVelocityConstraints() {
    for (int i = 0; i < m_count; ++i) {
        final ContactVelocityConstraint vc = m_velocityConstraints[i];
        int indexA = vc.indexA;
        int indexB = vc.indexB;
        float mA = vc.invMassA;
        float mB = vc.invMassB;
        float iA = vc.invIA;
        float iB = vc.invIB;
        int pointCount = vc.pointCount;
        Vec2 vA = m_velocities[indexA].v;
        float wA = m_velocities[indexA].w;
        Vec2 vB = m_velocities[indexB].v;
        float wB = m_velocities[indexB].w;
        Vec2 normal = vc.normal;
        final float normalx = normal.x;
        final float normaly = normal.y;
        float tangentx = 1.0f * vc.normal.y;
        float tangenty = -1.0f * vc.normal.x;
        final float friction = vc.friction;
        assert (pointCount == 1 || pointCount == 2);
        // Solve tangent constraints
        for (int j = 0; j < pointCount; ++j) {
            final VelocityConstraintPoint vcp = vc.points[j];
            final Vec2 a = vcp.rA;
            float dvx = -wB * vcp.rB.y + vB.x - vA.x + wA * a.y;
            float dvy = wB * vcp.rB.x + vB.y - vA.y - wA * a.x;
            // Compute tangent force
            final float vt = dvx * tangentx + dvy * tangenty - vc.tangentSpeed;
            float lambda = vcp.tangentMass * (-vt);
            // Clamp the accumulated force
            final float maxFriction = friction * vcp.normalImpulse;
            final float newImpulse = MathUtils.clamp(vcp.tangentImpulse + lambda, -maxFriction, maxFriction);
            lambda = newImpulse - vcp.tangentImpulse;
            vcp.tangentImpulse = newImpulse;
            // Apply contact impulse
            // Vec2 P = lambda * tangent;
            final float Px = tangentx * lambda;
            final float Py = tangenty * lambda;
            // vA -= invMassA * P;
            vA.x -= Px * mA;
            vA.y -= Py * mA;
            wA -= iA * (vcp.rA.x * Py - vcp.rA.y * Px);
            // vB += invMassB * P;
            vB.x += Px * mB;
            vB.y += Py * mB;
            wB += iB * (vcp.rB.x * Py - vcp.rB.y * Px);
        }
        // Solve normal constraints
        if (vc.pointCount == 1) {
            final VelocityConstraintPoint vcp = vc.points[0];
            // Relative velocity at contact
            // Vec2 dv = vB + Cross(wB, vcp.rB) - vA - Cross(wA, vcp.rA);
            float dvx = -wB * vcp.rB.y + vB.x - vA.x + wA * vcp.rA.y;
            float dvy = wB * vcp.rB.x + vB.y - vA.y - wA * vcp.rA.x;
            // Compute normal impulse
            final float vn = dvx * normalx + dvy * normaly;
            float lambda = -vcp.normalMass * (vn - vcp.velocityBias);
            // Clamp the accumulated impulse
            float a = vcp.normalImpulse + lambda;
            final float newImpulse = (a > 0.0f ? a : 0.0f);
            lambda = newImpulse - vcp.normalImpulse;
            vcp.normalImpulse = newImpulse;
            // Apply contact impulse
            float Px = normalx * lambda;
            float Py = normaly * lambda;
            // vA -= invMassA * P;
            vA.x -= Px * mA;
            vA.y -= Py * mA;
            wA -= iA * (vcp.rA.x * Py - vcp.rA.y * Px);
            // vB += invMassB * P;
            vB.x += Px * mB;
            vB.y += Py * mB;
            wB += iB * (vcp.rB.x * Py - vcp.rB.y * Px);
        } else {
            // Block solver developed in collaboration with Dirk Gregorius (back in 01/07 on
            // Box2D_Lite).
            // Build the mini LCP for this contact patch
            // 
            // vn = A * x + b, vn >= 0, , vn >= 0, x >= 0 and vn_i * x_i = 0 with i = 1..2
            // 
            // A = J * W * JT and J = ( -n, -r1 x n, n, r2 x n )
            // b = vn_0 - velocityBias
            // 
            // The system is solved using the "Total enumeration method" (s. Murty). The complementary
            // constraint vn_i * x_i
            // implies that we must have in any solution either vn_i = 0 or x_i = 0. So for the 2D
            // contact problem the cases
            // vn1 = 0 and vn2 = 0, x1 = 0 and x2 = 0, x1 = 0 and vn2 = 0, x2 = 0 and vn1 = 0 need to be
            // tested. The first valid
            // solution that satisfies the problem is chosen.
            // 
            // In order to account of the accumulated impulse 'a' (because of the iterative nature of
            // the solver which only requires
            // that the accumulated impulse is clamped and not the incremental impulse) we change the
            // impulse variable (x_i).
            // 
            // Substitute:
            // 
            // x = a + d
            // 
            // a := old total impulse
            // x := new total impulse
            // d := incremental impulse
            // 
            // For the current iteration we extend the formula for the incremental impulse
            // to compute the new total impulse:
            // 
            // vn = A * d + b
            // = A * (x - a) + b
            // = A * x + b - A * a
            // = A * x + b'
            // b' = b - A * a;
            final VelocityConstraintPoint cp1 = vc.points[0];
            final VelocityConstraintPoint cp2 = vc.points[1];
            final Vec2 cp1rA = cp1.rA;
            final Vec2 cp1rB = cp1.rB;
            final Vec2 cp2rA = cp2.rA;
            final Vec2 cp2rB = cp2.rB;
            float ax = cp1.normalImpulse;
            float ay = cp2.normalImpulse;
            assert (ax >= 0.0f && ay >= 0.0f);
            // Relative velocity at contact
            // Vec2 dv1 = vB + Cross(wB, cp1.rB) - vA - Cross(wA, cp1.rA);
            float dv1x = -wB * cp1rB.y + vB.x - vA.x + wA * cp1rA.y;
            float dv1y = wB * cp1rB.x + vB.y - vA.y - wA * cp1rA.x;
            // Vec2 dv2 = vB + Cross(wB, cp2.rB) - vA - Cross(wA, cp2.rA);
            float dv2x = -wB * cp2rB.y + vB.x - vA.x + wA * cp2rA.y;
            float dv2y = wB * cp2rB.x + vB.y - vA.y - wA * cp2rA.x;
            // Compute normal velocity
            float vn1 = dv1x * normalx + dv1y * normaly;
            float vn2 = dv2x * normalx + dv2y * normaly;
            float bx = vn1 - cp1.velocityBias;
            float by = vn2 - cp2.velocityBias;
            // Compute b'
            Mat22 R = vc.K;
            bx -= R.ex.x * ax + R.ey.x * ay;
            by -= R.ex.y * ax + R.ey.y * ay;
            // B2_NOT_USED(k_errorTol);
            for (; ; ) {
                // 
                // Case 1: vn = 0
                // 
                // 0 = A * x' + b'
                // 
                // Solve for x':
                // 
                // x' = - inv(A) * b'
                // 
                // Vec2 x = - Mul(c.normalMass, b);
                Mat22 R1 = vc.normalMass;
                float xx = R1.ex.x * bx + R1.ey.x * by;
                float xy = R1.ex.y * bx + R1.ey.y * by;
                xx *= -1;
                xy *= -1;
                if (xx >= 0.0f && xy >= 0.0f) {
                    // Get the incremental impulse
                    // Vec2 d = x - a;
                    float dx = xx - ax;
                    float dy = xy - ay;
                    // Apply incremental impulse
                    // Vec2 P1 = d.x * normal;
                    // Vec2 P2 = d.y * normal;
                    float P1x = dx * normalx;
                    float P1y = dx * normaly;
                    float P2x = dy * normalx;
                    float P2y = dy * normaly;
                    /*
             * vA -= invMassA * (P1 + P2); wA -= invIA * (Cross(cp1.rA, P1) + Cross(cp2.rA, P2));
             * 
             * vB += invMassB * (P1 + P2); wB += invIB * (Cross(cp1.rB, P1) + Cross(cp2.rB, P2));
             */
                    vA.x -= mA * (P1x + P2x);
                    vA.y -= mA * (P1y + P2y);
                    vB.x += mB * (P1x + P2x);
                    vB.y += mB * (P1y + P2y);
                    wA -= iA * (cp1rA.x * P1y - cp1rA.y * P1x + (cp2rA.x * P2y - cp2rA.y * P2x));
                    wB += iB * (cp1rB.x * P1y - cp1rB.y * P1x + (cp2rB.x * P2y - cp2rB.y * P2x));
                    // Accumulate
                    cp1.normalImpulse = xx;
                    cp2.normalImpulse = xy;
                    /*
             * #if B2_DEBUG_SOLVER == 1 // Postconditions dv1 = vB + Cross(wB, cp1.rB) - vA -
             * Cross(wA, cp1.rA); dv2 = vB + Cross(wB, cp2.rB) - vA - Cross(wA, cp2.rA);
             * 
             * // Compute normal velocity vn1 = Dot(dv1, normal); vn2 = Dot(dv2, normal);
             * 
             * assert(Abs(vn1 - cp1.velocityBias) < k_errorTol); assert(Abs(vn2 - cp2.velocityBias)
             * < k_errorTol); #endif
             */
                    if (DEBUG_SOLVER) {
                        // Postconditions
                        Vec2 dv1 = vB.add(Vec2.cross(wB, cp1rB).subLocal(vA).subLocal(Vec2.cross(wA, cp1rA)));
                        Vec2 dv2 = vB.add(Vec2.cross(wB, cp2rB).subLocal(vA).subLocal(Vec2.cross(wA, cp2rA)));
                        // Compute normal velocity
                        vn1 = Vec2.dot(dv1, normal);
                        vn2 = Vec2.dot(dv2, normal);
                        assert (MathUtils.abs(vn1 - cp1.velocityBias) < k_errorTol);
                        assert (MathUtils.abs(vn2 - cp2.velocityBias) < k_errorTol);
                    }
                    break;
                }
                // 
                // Case 2: vn1 = 0 and x2 = 0
                // 
                // 0 = a11 * x1' + a12 * 0 + b1'
                // vn2 = a21 * x1' + a22 * 0 + '
                // 
                xx = -cp1.normalMass * bx;
                xy = 0.0f;
                vn1 = 0.0f;
                vn2 = vc.K.ex.y * xx + by;
                if (xx >= 0.0f && vn2 >= 0.0f) {
                    // Get the incremental impulse
                    float dx = xx - ax;
                    float dy = xy - ay;
                    // Apply incremental impulse
                    // Vec2 P1 = d.x * normal;
                    // Vec2 P2 = d.y * normal;
                    float P1x = normalx * dx;
                    float P1y = normaly * dx;
                    float P2x = normalx * dy;
                    float P2y = normaly * dy;
                    /*
             * Vec2 P1 = d.x * normal; Vec2 P2 = d.y * normal; vA -= invMassA * (P1 + P2); wA -=
             * invIA * (Cross(cp1.rA, P1) + Cross(cp2.rA, P2));
             * 
             * vB += invMassB * (P1 + P2); wB += invIB * (Cross(cp1.rB, P1) + Cross(cp2.rB, P2));
             */
                    vA.x -= mA * (P1x + P2x);
                    vA.y -= mA * (P1y + P2y);
                    vB.x += mB * (P1x + P2x);
                    vB.y += mB * (P1y + P2y);
                    wA -= iA * (cp1rA.x * P1y - cp1rA.y * P1x + (cp2rA.x * P2y - cp2rA.y * P2x));
                    wB += iB * (cp1rB.x * P1y - cp1rB.y * P1x + (cp2rB.x * P2y - cp2rB.y * P2x));
                    // Accumulate
                    cp1.normalImpulse = xx;
                    cp2.normalImpulse = xy;
                    /*
             * #if B2_DEBUG_SOLVER == 1 // Postconditions dv1 = vB + Cross(wB, cp1.rB) - vA -
             * Cross(wA, cp1.rA);
             * 
             * // Compute normal velocity vn1 = Dot(dv1, normal);
             * 
             * assert(Abs(vn1 - cp1.velocityBias) < k_errorTol); #endif
             */
                    if (DEBUG_SOLVER) {
                        // Postconditions
                        Vec2 dv1 = vB.add(Vec2.cross(wB, cp1rB).subLocal(vA).subLocal(Vec2.cross(wA, cp1rA)));
                        // Compute normal velocity
                        vn1 = Vec2.dot(dv1, normal);
                        assert (MathUtils.abs(vn1 - cp1.velocityBias) < k_errorTol);
                    }
                    break;
                }
                // 
                // Case 3: wB = 0 and x1 = 0
                // 
                // vn1 = a11 * 0 + a12 * x2' + b1'
                // 0 = a21 * 0 + a22 * x2' + '
                // 
                xx = 0.0f;
                xy = -cp2.normalMass * by;
                vn1 = vc.K.ey.x * xy + bx;
                vn2 = 0.0f;
                if (xy >= 0.0f && vn1 >= 0.0f) {
                    // Resubstitute for the incremental impulse
                    float dx = xx - ax;
                    float dy = xy - ay;
                    // Apply incremental impulse
                    /*
             * Vec2 P1 = d.x * normal; Vec2 P2 = d.y * normal; vA -= invMassA * (P1 + P2); wA -=
             * invIA * (Cross(cp1.rA, P1) + Cross(cp2.rA, P2));
             * 
             * vB += invMassB * (P1 + P2); wB += invIB * (Cross(cp1.rB, P1) + Cross(cp2.rB, P2));
             */
                    float P1x = normalx * dx;
                    float P1y = normaly * dx;
                    float P2x = normalx * dy;
                    float P2y = normaly * dy;
                    vA.x -= mA * (P1x + P2x);
                    vA.y -= mA * (P1y + P2y);
                    vB.x += mB * (P1x + P2x);
                    vB.y += mB * (P1y + P2y);
                    wA -= iA * (cp1rA.x * P1y - cp1rA.y * P1x + (cp2rA.x * P2y - cp2rA.y * P2x));
                    wB += iB * (cp1rB.x * P1y - cp1rB.y * P1x + (cp2rB.x * P2y - cp2rB.y * P2x));
                    // Accumulate
                    cp1.normalImpulse = xx;
                    cp2.normalImpulse = xy;
                    /*
             * #if B2_DEBUG_SOLVER == 1 // Postconditions dv2 = vB + Cross(wB, cp2.rB) - vA -
             * Cross(wA, cp2.rA);
             * 
             * // Compute normal velocity vn2 = Dot(dv2, normal);
             * 
             * assert(Abs(vn2 - cp2.velocityBias) < k_errorTol); #endif
             */
                    if (DEBUG_SOLVER) {
                        // Postconditions
                        Vec2 dv2 = vB.add(Vec2.cross(wB, cp2rB).subLocal(vA).subLocal(Vec2.cross(wA, cp2rA)));
                        // Compute normal velocity
                        vn2 = Vec2.dot(dv2, normal);
                        assert (MathUtils.abs(vn2 - cp2.velocityBias) < k_errorTol);
                    }
                    break;
                }
                // 
                // Case 4: x1 = 0 and x2 = 0
                // 
                // vn1 = b1
                // vn2 = ;
                xx = 0.0f;
                xy = 0.0f;
                vn1 = bx;
                vn2 = by;
                if (vn1 >= 0.0f && vn2 >= 0.0f) {
                    // Resubstitute for the incremental impulse
                    float dx = xx - ax;
                    float dy = xy - ay;
                    // Apply incremental impulse
                    /*
             * Vec2 P1 = d.x * normal; Vec2 P2 = d.y * normal; vA -= invMassA * (P1 + P2); wA -=
             * invIA * (Cross(cp1.rA, P1) + Cross(cp2.rA, P2));
             * 
             * vB += invMassB * (P1 + P2); wB += invIB * (Cross(cp1.rB, P1) + Cross(cp2.rB, P2));
             */
                    float P1x = normalx * dx;
                    float P1y = normaly * dx;
                    float P2x = normalx * dy;
                    float P2y = normaly * dy;
                    vA.x -= mA * (P1x + P2x);
                    vA.y -= mA * (P1y + P2y);
                    vB.x += mB * (P1x + P2x);
                    vB.y += mB * (P1y + P2y);
                    wA -= iA * (cp1rA.x * P1y - cp1rA.y * P1x + (cp2rA.x * P2y - cp2rA.y * P2x));
                    wB += iB * (cp1rB.x * P1y - cp1rB.y * P1x + (cp2rB.x * P2y - cp2rB.y * P2x));
                    // Accumulate
                    cp1.normalImpulse = xx;
                    cp2.normalImpulse = xy;
                    break;
                }
                // No solution, give up. This is hit sometimes, but it doesn't seem to matter.
                break;
            }
        }
        // m_velocities[indexA].v.set(vA);
        m_velocities[indexA].w = wA;
        // m_velocities[indexB].v.set(vB);
        m_velocities[indexB].w = wB;
    }
}
