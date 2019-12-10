@Override
public void draw(ModelInstanceControllerRenderData data) {
    controllersRenderData.add(data);
    bufferedParticlesCount += data.controller.particles.size;
}
