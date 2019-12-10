private void doneLoading() {
    Model model = assets.get("data/g3d/invaders.g3dj", Model.class);
    for (int i = 0; i < model.nodes.size; i++) {
        String id = model.nodes.get(i).id;
        ModelInstance instance = new ModelInstance(model, id);
        Node node = instance.getNode(id);
        instance.transform.set(node.globalTransform);
        node.translation.set(0, 0, 0);
        node.scale.set(1, 1, 1);
        node.rotation.idt();
        instance.calculateTransforms();
        if (id.equals("space")) {
            space = instance;
            continue;
        }
        instances.add(instance);
        if (id.equals("ship"))
            ship = instance;
        else if (id.startsWith("block"))
            blocks.add(instance);
        else if (id.startsWith("invader"))
            invaders.add(instance);
    }
    loading = false;
}
