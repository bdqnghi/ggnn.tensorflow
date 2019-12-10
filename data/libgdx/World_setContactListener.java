/**
 * Register a contact event listener. The listener is owned by you and must remain in scope.
 *
 * @param listener
 */
public void setContactListener(ContactListener listener) {
    m_contactManager.m_contactListener = listener;
}
