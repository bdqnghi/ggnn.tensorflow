public void setTarget(Actor target) {
    if (target != null)
        waitForActions.addAll(target.getActions());
    super.setTarget(target);
}
