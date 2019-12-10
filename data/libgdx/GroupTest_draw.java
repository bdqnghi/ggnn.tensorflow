public void draw(Batch batch, float parentAlpha) {
    // Use Stage#toScreenCoordinates, which we know is correct.
    toScreenCoordinates.set(testX, testY).sub(getOriginX(), getOriginY()).scl(getScaleX(), getScaleY()).rotate(getRotation()).add(getOriginX(), getOriginY()).add(getX(), getY());
    getStage().toScreenCoordinates(toScreenCoordinates, batch.getTransformMatrix());
    // Do the same as toScreenCoordinates via Actor#localToParentCoordinates.
    localToAscendantCoordinates(null, localToParentCoordinates.set(testX, testY));
    getStage().stageToScreenCoordinates(localToParentCoordinates);
    // System.out.println(name + " " + toScreenCoordinates + " " + localToParentCoordinates);
    batch.setColor(getColor());
    batch.draw(region, getX(), getY(), getOriginX(), getOriginY(), getWidth(), getHeight(), getScaleX(), getScaleY(), getRotation());
    super.draw(batch, parentAlpha);
}
