private void addType(IDynamicStack<Contact> creator, ShapeType type1, ShapeType type2) {
    ContactRegister register = new ContactRegister();
    register.creator = creator;
    register.primary = true;
    contactStacks[type1.ordinal()][type2.ordinal()] = register;
    if (type1 != type2) {
        ContactRegister register2 = new ContactRegister();
        register2.creator = creator;
        register2.primary = false;
        contactStacks[type2.ordinal()][type1.ordinal()] = register2;
    }
}
