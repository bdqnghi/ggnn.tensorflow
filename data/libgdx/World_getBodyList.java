/**
 * Get the world body list. With the returned body, use Body.getNext to get the next body in the
 * world list. A null body indicates the end of the list.
 *
 * @return the head of the world body list.
 */
public Body getBodyList() {
    return m_bodyList;
}
