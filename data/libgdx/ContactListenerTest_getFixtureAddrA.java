public long getFixtureAddrA(Contact contact) {
    try {
        long addr = getContactAddr(contact);
        Method getFixtureA = contact.getClass().getDeclaredMethod("jniGetFixtureA", long.class);
        getFixtureA.setAccessible(true);
        return (Long) getFixtureA.invoke(contact, addr);
    } catch (Exception e) {
        e.printStackTrace();
        return 0;
    }
}
