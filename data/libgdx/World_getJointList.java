/**
 * Get the world joint list. With the returned joint, use Joint.getNext to get the next joint in
 * the world list. A null joint indicates the end of the list.
 *
 * @return the head of the world joint list.
 */
public Joint getJointList() {
    return m_jointList;
}
