@Override
public void draw(T data) {
    if (data.controller.particles.size > 0) {
        renderData.add(data);
        bufferedParticlesCount += data.controller.particles.size;
    }
}
