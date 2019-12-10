@Override
public void execute(double timestamp) {
    if (ticking) {
        GamepadSupport.pollGamepads();
        GamepadSupport.pollGamepadsStatus();
        AnimationScheduler.get().requestAnimationFrame(this);
    }
}
