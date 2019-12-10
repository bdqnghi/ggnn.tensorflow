public void update(FlameMain editor) {
    SpawnInfluencer influencer = (SpawnInfluencer) editor.getEmitter().findInfluencer(SpawnInfluencer.class);
    shapeCombo.setSelectedItem(spawnShapeToString(influencer.spawnShapeValue));
}
