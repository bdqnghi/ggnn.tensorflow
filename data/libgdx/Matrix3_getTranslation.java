public Vector2 getTranslation(Vector2 position) {
    position.x = val[M02];
    position.y = val[M12];
    return position;
}
