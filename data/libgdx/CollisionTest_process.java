public void process() {
    Color color = null;
    update();
    hits.clear();
    contacts.clear();
    // Check what the projectile hits
    if (projectile != null) {
        color = projectile.getColor();
        projectile.setColor(Color.RED);
        world.collisionWorld.contactTest(projectile.body, contactCB);
    }
    // Check for other collisions
    updateContactInfo();
    if (hits.size > 0) {
        for (int i = 0; i < hits.size; i++) {
            colors.add(colorPool.obtain().set(hits.get(i).getColor()));
            hits.get(i).setColor(Color.RED);
        }
    }
    if (contacts.size > 0) {
        for (int i = 0; i < contacts.size; i++) {
            colors.add(colorPool.obtain().set(contacts.get(i).getColor()));
            contacts.get(i).setColor(Color.BLUE);
        }
    }
    render(false);
    if (projectile != null)
        projectile.setColor(color);
    for (int i = 0; i < hits.size; i++) hits.get(i).setColor(colors.get(i));
    for (int i = 0; i < contacts.size; i++) contacts.get(i).setColor(colors.get(hits.size + i));
    colorPool.freeAll(colors);
    colors.clear();
}
