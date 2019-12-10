public final void getLinearVelocityFromLocalPointToOut(Vec2 localPoint, Vec2 out) {
    getWorldPointToOut(localPoint, out);
    getLinearVelocityFromWorldPointToOut(out, out);
}
