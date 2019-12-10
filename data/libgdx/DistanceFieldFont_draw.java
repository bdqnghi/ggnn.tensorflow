@Override
public void draw(Batch spriteBatch, int start, int end) {
    setSmoothingUniform(spriteBatch, getSmoothingFactor());
    super.draw(spriteBatch, start, end);
    setSmoothingUniform(spriteBatch, 0);
}
