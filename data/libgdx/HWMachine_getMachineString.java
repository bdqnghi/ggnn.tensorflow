public static String getMachineString() {
    BytePtr name = BytePtr.toBytePtrAsciiZ("hw.machine");
    MachineSizedUIntPtr size = new MachineSizedUIntPtr();
    sysctlbyname(name, null, size, null, 0);
    BytePtr machine = Struct.allocate(BytePtr.class, (int) size.get());
    sysctlbyname(name, machine.as(VoidPtr.class), size, null, 0);
    return machine.toStringAsciiZ();
}
