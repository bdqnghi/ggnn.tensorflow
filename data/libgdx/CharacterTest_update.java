@Override
public void update() {
    // If the left or right key is pressed, rotate the character and update its physics update accordingly.
    if (Gdx.input.isKeyPressed(Keys.LEFT)) {
        characterTransform.rotate(0, 1, 0, 5f);
        ghostObject.setWorldTransform(characterTransform);
    }
    if (Gdx.input.isKeyPressed(Keys.RIGHT)) {
        characterTransform.rotate(0, 1, 0, -5f);
        ghostObject.setWorldTransform(characterTransform);
    }
    // Fetch which direction the character is facing now
    characterDirection.set(-1, 0, 0).rot(characterTransform).nor();
    // Set the walking direction accordingly (either forward or backward)
    walkDirection.set(0, 0, 0);
    if (Gdx.input.isKeyPressed(Keys.UP))
        walkDirection.add(characterDirection);
    if (Gdx.input.isKeyPressed(Keys.DOWN))
        walkDirection.add(-characterDirection.x, -characterDirection.y, -characterDirection.z);
    walkDirection.scl(4f * Gdx.graphics.getDeltaTime());
    // And update the character controller
    characterController.setWalkDirection(walkDirection);
    // Now we can update the world as normally
    super.update();
    // And fetch the new transformation of the character (this will make the model be rendered correctly)
    ghostObject.getWorldTransform(characterTransform);
}
