@Override
protected void onLoaded() {
    if (skydome == null) {
        skydome = new ModelInstance(assets.get("data/g3d/skydome.g3db", Model.class));
        floorModel.getMaterial("concrete").set(TextureAttribute.createDiffuse(assets.get("data/g3d/concrete.png", Texture.class)));
        floorModel.getMaterial("tree").set(TextureAttribute.createDiffuse(assets.get("data/tree.png", Texture.class)), new BlendingAttribute());
        instances.add(new ModelInstance(floorModel, "floor"));
        instances.add(tree = new ModelInstance(floorModel, "tree"));
        assets.load("data/g3d/knight.g3db", Model.class);
        loading = true;
    } else if (character == null) {
        character = new ModelInstance(assets.get("data/g3d/knight.g3db", Model.class));
        BoundingBox bbox = new BoundingBox();
        character.calculateBoundingBox(bbox);
        character.transform.setToRotation(Vector3.Y, 180).trn(0, -bbox.min.y, 0);
        instances.add(character);
        animation = new AnimationController(character);
        animation.animate("Idle", -1, 1f, null, 0.2f);
        status = idle;
        for (Animation anim : character.animations) Gdx.app.log("Test", anim.id);
    }
}
