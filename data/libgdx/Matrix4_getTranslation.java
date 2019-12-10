public Vector3 getTranslation(Vector3 position) {
    position.x = val[M03];
    position.y = val[M13];
    position.z = val[M23];
    return position;
}
