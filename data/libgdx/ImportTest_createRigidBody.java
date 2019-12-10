@Override
public btRigidBody createRigidBody(boolean isDynamic, float mass, Matrix4 startTransform, btCollisionShape shape, String bodyName) {
    Vector3 localInertia = new Vector3();
    if (mass > 0f)
        shape.calculateLocalInertia(mass, localInertia);
    btRigidBody result = new btRigidBody(mass, null, shape, localInertia);
    String nodeName = bodyName.split("_", 2)[0] + "_model";
    ModelInstance instance = new ModelInstance(model, nodeName, true, true);
    instance.transform.set(startTransform);
    BulletEntity entity = new BulletEntity(instance, result);
    ImportTest.this.world.add(entity);
    return result;
}
