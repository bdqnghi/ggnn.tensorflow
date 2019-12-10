/**
 * Compute the upper bound on time before two shapes penetrate. Time is represented as a fraction
 * between [0,tMax]. This uses a swept separating axis and may miss some intermediate,
 * non-tunneling collision. If you change the time interval, you should call this function again.
 * Note: use Distance to compute the contact point and normal at the time of impact.
 *
 * @param output
 * @param input
 */
public final void timeOfImpact(TOIOutput output, TOIInput input) {
    // CCD via the local separating axis method. This seeks progression
    // by computing the largest time at which separation is maintained.
    ++toiCalls;
    output.state = TOIOutputState.UNKNOWN;
    output.t = input.tMax;
    final DistanceProxy proxyA = input.proxyA;
    final DistanceProxy proxyB = input.proxyB;
    sweepA.set(input.sweepA);
    sweepB.set(input.sweepB);
    // Large rotations can make the root finder fail, so we normalize the
    // sweep angles.
    sweepA.normalize();
    sweepB.normalize();
    float tMax = input.tMax;
    float totalRadius = proxyA.m_radius + proxyB.m_radius;
    // djm: whats with all these constants?
    float target = MathUtils.max(Settings.linearSlop, totalRadius - 3.0f * Settings.linearSlop);
    float tolerance = 0.25f * Settings.linearSlop;
    assert (target > tolerance);
    float t1 = 0f;
    int iter = 0;
    cache.count = 0;
    distanceInput.proxyA = input.proxyA;
    distanceInput.proxyB = input.proxyB;
    distanceInput.useRadii = false;
    // This loop terminates when an axis is repeated (no progress is made).
    for (; ; ) {
        sweepA.getTransform(xfA, t1);
        sweepB.getTransform(xfB, t1);
        // System.out.printf("sweepA: %f, %f, sweepB: %f, %f\n",
        // sweepA.c.x, sweepA.c.y, sweepB.c.x, sweepB.c.y);
        // Get the distance between shapes. We can also use the results
        // to get a separating axis
        distanceInput.transformA = xfA;
        distanceInput.transformB = xfB;
        pool.getDistance().distance(distanceOutput, cache, distanceInput);
        // If the shapes are overlapped, we give up on continuous collision.
        if (distanceOutput.distance <= 0f) {
            // Failure!
            output.state = TOIOutputState.OVERLAPPED;
            output.t = 0f;
            break;
        }
        if (distanceOutput.distance < target + tolerance) {
            // Victory!
            output.state = TOIOutputState.TOUCHING;
            output.t = t1;
            break;
        }
        // Initialize the separating axis.
        fcn.initialize(cache, proxyA, sweepA, proxyB, sweepB, t1);
        // Compute the TOI on the separating axis. We do this by successively
        // resolving the deepest point. This loop is bounded by the number of
        // vertices.
        boolean done = false;
        float t2 = tMax;
        int pushBackIter = 0;
        for (; ; ) {
            // Find the deepest point at t2. Store the witness point indices.
            float s2 = fcn.findMinSeparation(indexes, t2);
            // Is the final configuration separated?
            if (s2 > target + tolerance) {
                // Victory!
                output.state = TOIOutputState.SEPARATED;
                output.t = tMax;
                done = true;
                break;
            }
            // Has the separation reached tolerance?
            if (s2 > target - tolerance) {
                // Advance the sweeps
                t1 = t2;
                break;
            }
            // Compute the initial separation of the witness points.
            float s1 = fcn.evaluate(indexes[0], indexes[1], t1);
            // tolerance);
            if (s1 < target - tolerance) {
                output.state = TOIOutputState.FAILED;
                output.t = t1;
                done = true;
                break;
            }
            // Check for touching
            if (s1 <= target + tolerance) {
                // Victory! t1 should hold the TOI (could be 0.0).
                output.state = TOIOutputState.TOUCHING;
                output.t = t1;
                done = true;
                break;
            }
            // Compute 1D root of: f(x) - target = 0
            int rootIterCount = 0;
            float a1 = t1, a2 = t2;
            for (; ; ) {
                // Use a mix of the secant rule and bisection.
                float t;
                if ((rootIterCount & 1) == 1) {
                    // Secant rule to improve convergence.
                    t = a1 + (target - s1) * (a2 - a1) / (s2 - s1);
                } else {
                    // Bisection to guarantee progress.
                    t = 0.5f * (a1 + a2);
                }
                float s = fcn.evaluate(indexes[0], indexes[1], t);
                if (MathUtils.abs(s - target) < tolerance) {
                    // t2 holds a tentative value for t1
                    t2 = t;
                    break;
                }
                // Ensure we continue to bracket the root.
                if (s > target) {
                    a1 = t;
                    s1 = s;
                } else {
                    a2 = t;
                    s2 = s;
                }
                ++rootIterCount;
                ++toiRootIters;
                // djm: whats with this? put in settings?
                if (rootIterCount == 50) {
                    break;
                }
            }
            toiMaxRootIters = MathUtils.max(toiMaxRootIters, rootIterCount);
            ++pushBackIter;
            if (pushBackIter == Settings.maxPolygonVertices) {
                break;
            }
        }
        ++iter;
        ++toiIters;
        if (done) {
            // System.out.println("done");
            break;
        }
        if (iter == MAX_ITERATIONS) {
            // System.out.println("failed, root finder stuck");
            // Root finder got stuck. Semi-victory.
            output.state = TOIOutputState.FAILED;
            output.t = t1;
            break;
        }
    }
    // System.out.printf("final sweeps: %f, %f, %f; %f, %f, %f", input.s)
    toiMaxIters = MathUtils.max(toiMaxIters, iter);
}
