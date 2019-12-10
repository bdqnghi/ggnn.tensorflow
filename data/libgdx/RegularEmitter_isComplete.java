public boolean isComplete() {
    if (delayTimer < delay)
        return false;
    return durationTimer >= duration && controller.particles.size == 0;
}
