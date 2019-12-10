@Override
public void dispose() {
    spriteBatch.dispose();
    renderer.dispose();
    font.dispose();
    // Restore predefined colors
    Colors.reset();
}
