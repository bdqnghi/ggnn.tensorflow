private static void rebuildReferences(final Model model, final Node node) {
    for (final NodePart mpm : node.parts) {
        if (!model.materials.contains(mpm.material, true))
            model.materials.add(mpm.material);
        if (!model.meshParts.contains(mpm.meshPart, true)) {
            model.meshParts.add(mpm.meshPart);
            if (!model.meshes.contains(mpm.meshPart.mesh, true))
                model.meshes.add(mpm.meshPart.mesh);
            model.manageDisposable(mpm.meshPart.mesh);
        }
    }
    for (final Node child : node.getChildren()) rebuildReferences(model, child);
}
