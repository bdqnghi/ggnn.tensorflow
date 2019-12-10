/**
 * Get the list of all contacts attached to this body.
 *
 * @warning this list changes during the time step and you may miss some collisions if you don't
 *          use ContactListener.
 */
public final ContactEdge getContactList() {
    return m_contactList;
}
