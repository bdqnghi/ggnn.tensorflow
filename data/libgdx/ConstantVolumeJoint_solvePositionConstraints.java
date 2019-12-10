@Override
public boolean solvePositionConstraints(SolverData step) {
    return constrainEdges(step.positions);
}
