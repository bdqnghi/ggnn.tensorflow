public void loadEmitterImages(FileHandle imagesDir) {
    ownsTexture = true;
    HashMap<String, Sprite> loadedSprites = new HashMap<String, Sprite>(emitters.size);
    for (int i = 0, n = emitters.size; i < n; i++) {
        ParticleEmitter emitter = emitters.get(i);
        String imagePath = emitter.getImagePath();
        if (imagePath == null)
            continue;
        String imageName = new File(imagePath.replace('\\', '/')).getName();
        Sprite sprite = loadedSprites.get(imageName);
        if (sprite == null) {
            sprite = new Sprite(loadTexture(imagesDir.child(imageName)));
            loadedSprites.put(imageName, sprite);
        }
        emitter.setSprite(sprite);
    }
}
