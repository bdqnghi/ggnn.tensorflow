public void saveEffect(File file) {
    Writer fileWriter = null;
    try {
        ParticleEffectLoader loader = (ParticleEffectLoader) assetManager.getLoader(ParticleEffect.class);
        loader.save(effect, new ParticleEffectSaveParameter(new FileHandle(file.getAbsolutePath()), assetManager, particleSystem.getBatches()));
    } catch (Exception ex) {
        System.out.println("Error saving effect: " + file.getAbsolutePath());
        ex.printStackTrace();
        JOptionPane.showMessageDialog(this, "Error saving effect.");
    } finally {
        StreamUtils.closeQuietly(fileWriter);
    }
}
