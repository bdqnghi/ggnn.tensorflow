public long getContactAddr(Contact contact) {
    try {
        Field addrField = contact.getClass().getDeclaredField("addr");
        addrField.setAccessible(true);
        return addrField.getLong(contact);
    } catch (Exception e) {
        e.printStackTrace();
        return 0;
    }
}
