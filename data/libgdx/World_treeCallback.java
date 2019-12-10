public boolean treeCallback(int nodeId) {
    FixtureProxy proxy = (FixtureProxy) broadPhase.getUserData(nodeId);
    return callback.reportFixture(proxy.fixture);
}
