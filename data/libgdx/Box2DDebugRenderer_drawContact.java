private void drawContact(Contact contact) {
    WorldManifold worldManifold = contact.getWorldManifold();
    if (worldManifold.getNumberOfContactPoints() == 0)
        return;
    Vector2 point = worldManifold.getPoints()[0];
    renderer.point(point.x, point.y, 0);
}
