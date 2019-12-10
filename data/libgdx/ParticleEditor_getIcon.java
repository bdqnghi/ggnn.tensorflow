public ImageIcon getIcon(ParticleEmitter emitter) {
    ParticleData data = particleData.get(emitter);
    if (data == null)
        particleData.put(emitter, data = new ParticleData());
    String imagePath = emitter.getImagePath();
    if (data.icon == null && imagePath != null) {
        try {
            URL url;
            File file = new File(imagePath);
            if (file.exists())
                url = file.toURI().toURL();
            else {
                url = ParticleEditor.class.getResource(imagePath);
                if (url == null)
                    return null;
            }
            data.icon = new ImageIcon(url);
        } catch (MalformedURLException ex) {
            ex.printStackTrace();
        }
    }
    return data.icon;
}
