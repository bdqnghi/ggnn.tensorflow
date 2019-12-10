private void create(final Model model, final float mass, final btCollisionShape shape) {
    this.model = model;
    this.shape = shape;
    if (shape != null && mass >= 0) {
        // Calculate the local inertia, bodies with no mass are static
        Vector3 localInertia;
        if (mass == 0)
            localInertia = Vector3.Zero;
        else {
            shape.calculateLocalInertia(mass, tmpV);
            localInertia = tmpV;
        }
        // For now just pass null as the motionstate, we'll add that to the body in the entity itself
        bodyInfo = new btRigidBodyConstructionInfo(mass, null, shape, localInertia);
    }
}
