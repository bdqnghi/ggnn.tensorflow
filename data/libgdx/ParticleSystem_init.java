public void init(ParticleSystem system, Shape shape, Transform xf, boolean callDestructionListener) {
    this.system = system;
    this.shape = shape;
    this.xf = xf;
    this.destroyed = 0;
    this.callDestructionListener = callDestructionListener;
}
