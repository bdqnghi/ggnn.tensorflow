public void solveFakeIK(Vector3 target) {
    float gravity = Gdx.graphics.getDeltaTime() * GRAVITY;
    endPoint.set(target);
    bones[0].position.set(endPoint);
    for (int i = 0; i < bones.length - 1; i++) {
        Bone bone = bones[i];
        endPoint.set(bone.position);
        diff.set(endPoint.x, endPoint.y).sub(bones[i + 1].position.x, bones[i + 1].position.y);
        diff.add(0, gravity);
        diff.add(bones[i + 1].inertia.x, bones[i + 1].inertia.y);
        diff.nor().scl(bones[i + 1].len);
        float x = endPoint.x - diff.x;
        float y = endPoint.y - diff.y;
        float delta = Gdx.graphics.getDeltaTime();
        bones[i + 1].inertia.add((bones[i + 1].position.x - x) * delta, (bones[i + 1].position.y - y) * delta, 0).scl(0.99f);
        bones[i + 1].position.set(x, y, 0);
    }
}
