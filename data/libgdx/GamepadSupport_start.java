public void start() {
    if (!ticking) {
        ticking = true;
        AnimationScheduler.get().requestAnimationFrame(this);
    }
}
