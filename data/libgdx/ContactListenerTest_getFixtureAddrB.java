public long getFixtureAddrB(Contact contact) {
    try {
        long addr = getContactAddr(contact);
        Method getFixtureB = contact.getClass().getDeclaredMethod("jniGetFixtureB", long.class);
        getFixtureB.setAccessible(true);
        return (Long) getFixtureB.invoke(contact, addr);
    } catch (Exception e) {
        e.printStackTrace();
        return 0;
    }
}
