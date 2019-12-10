@Override
public void update() {
    for (int i = 0, c = controller.particles.size; i < c; ++i) {
        controllerChannel.data[i].draw();
    }
}
