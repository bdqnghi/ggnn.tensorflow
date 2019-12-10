/**
 * Get the world contact list. With the returned contact, use Contact.getNext to get the next
 * contact in the world list. A null contact indicates the end of the list.
 *
 * @return the head of the world contact list.
 * @warning contacts are created and destroyed in the middle of a time step. Use ContactListener
 *          to avoid missing contacts.
 */
public Contact getContactList() {
    return m_contactManager.m_contactList;
}
