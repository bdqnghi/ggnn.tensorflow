public ParticleEffect openEffect(File file, boolean replaceCurrentWorkspace) {
    try {
        ParticleEffect loadedEffect = load(file.getAbsolutePath(), ParticleEffect.class, null, new ParticleEffectLoader.ParticleEffectLoadParameter(particleSystem.getBatches()));
        loadedEffect = loadedEffect.copy();
        loadedEffect.init();
        if (replaceCurrentWorkspace) {
            effect = loadedEffect;
            controllersData.clear();
            particleSystem.removeAll();
            particleSystem.add(effect);
            for (ParticleController controller : effect.getControllers()) controllersData.add(new ControllerData(controller));
            rebuildActiveControllers();
        }
        reloadRows();
        return loadedEffect;
    } catch (Exception ex) {
        System.out.println("Error loading effect: " + file.getAbsolutePath());
        ex.printStackTrace();
        JOptionPane.showMessageDialog(this, "Error opening effect.");
    }
    return null;
}
