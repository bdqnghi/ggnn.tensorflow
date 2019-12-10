private void takeSnapshot() {
    mainDependenciesSnapshot.clear();
    for (int i = 0; i < mainDependencies.size(); i++) {
        mainDependenciesSnapshot.add(mainDependencies.get(i));
    }
}
