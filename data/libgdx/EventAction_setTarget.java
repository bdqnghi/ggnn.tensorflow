public void setTarget(Actor newTarget) {
    if (target != null)
        target.removeListener(listener);
    super.setTarget(newTarget);
    if (newTarget != null)
        newTarget.addListener(listener);
}
