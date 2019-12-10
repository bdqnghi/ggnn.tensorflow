@Override
public void end() {
    for (int i = 0; i < controller.particles.size; ++i) {
        particleControllerChannel.data[i].end();
    }
}
