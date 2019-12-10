/**
 * Register a contact filter to provide specific control over collision. Otherwise the default
 * filter is used (_defaultFilter). The listener is owned by you and must remain in scope.
 *
 * @param filter
 */
public void setContactFilter(ContactFilter filter) {
    m_contactManager.m_contactFilter = filter;
}
