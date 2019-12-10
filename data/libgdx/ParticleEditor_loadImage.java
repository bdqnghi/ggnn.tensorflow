private void loadImage(ParticleEmitter emitter) {
    final String imagePath = emitter.getImagePath();
    String imageName = new File(imagePath.replace('\\', '/')).getName();
    try {
        FileHandle file;
        if (imagePath.equals(ParticleEditor.DEFAULT_PARTICLE) || imagePath.equals(ParticleEditor.DEFAULT_PREMULT_PARTICLE)) {
            file = Gdx.files.classpath(imagePath);
        } else {
            if ((imagePath.contains("/") || imagePath.contains("\\")) && !imageName.contains("..")) {
                file = Gdx.files.absolute(imagePath);
                if (!file.exists()) {
                    // try to use image in effect directory
                    file = Gdx.files.absolute(new File(effectFile.getParentFile(), imageName).getAbsolutePath());
                }
            } else {
                file = Gdx.files.absolute(new File(effectFile.getParentFile(), imagePath).getAbsolutePath());
            }
        }
        emitter.setSprite(new Sprite(new Texture(file)));
        if (effectFile != null) {
            URI relativeUri = effectFile.getParentFile().toURI().relativize(file.file().toURI());
            emitter.setImagePath(relativeUri.getPath());
        }
    } catch (GdxRuntimeException ex) {
        ex.printStackTrace();
        EventQueue.invokeLater(new Runnable() {

            public void run() {
                JOptionPane.showMessageDialog(ParticleEditor.this, "Error loading image:\n" + imagePath);
            }
        });
        emitter.setImagePath(null);
    }
}
