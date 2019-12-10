private void renderBones() {
    renderer.begin(ShapeType.Line);
    renderer.setColor(0, 1, 0, 1);
    for (int i = 0; i < bones.length - 1; i++) {
        renderer.line(bones[i].position.x, bones[i].position.y, bones[i + 1].position.x, bones[i + 1].position.y);
    }
    renderer.end();
    renderer.begin(ShapeType.Point);
    renderer.setColor(1, 0, 0, 1);
    for (int i = 0; i < bones.length; i++) {
        renderer.point(bones[i].position.x, bones[i].position.y, 0);
    }
    renderer.end();
}
