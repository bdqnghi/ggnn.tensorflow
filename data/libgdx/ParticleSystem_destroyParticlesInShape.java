public int destroyParticlesInShape(Shape shape, Transform xf, boolean callDestructionListener) {
    dpcallback.init(this, shape, xf, callDestructionListener);
    shape.computeAABB(temp, xf, 0);
    m_world.queryAABB(dpcallback, temp);
    return dpcallback.destroyed;
}
