public static IOSDevice getDevice(String machineString) {
    for (IOSDevice device : values()) {
        if (device.machineString.equalsIgnoreCase(machineString))
            return device;
    }
    return null;
}
