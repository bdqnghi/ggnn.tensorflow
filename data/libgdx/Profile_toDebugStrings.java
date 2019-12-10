public void toDebugStrings(List<String> strings) {
    strings.add("Profile:");
    strings.add(" step: " + step);
    strings.add("  init: " + stepInit);
    strings.add("  collide: " + collide);
    strings.add("  particles: " + solveParticleSystem);
    strings.add("  solve: " + solve);
    strings.add("   solveInit: " + solveInit);
    strings.add("   solveVelocity: " + solveVelocity);
    strings.add("   solvePosition: " + solvePosition);
    strings.add("   broadphase: " + broadphase);
    strings.add("  solveTOI: " + solveTOI);
}
