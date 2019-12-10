/**
 * Register a routine for debug drawing. The debug draw functions are called inside with
 * World.DrawDebugData method. The debug draw object is owned by you and must remain in scope.
 *
 * @param debugDraw
 */
public void setDebugDraw(DebugDraw debugDraw) {
    m_debugDraw = debugDraw;
}
