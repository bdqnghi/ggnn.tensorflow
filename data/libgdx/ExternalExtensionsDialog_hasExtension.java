public boolean hasExtension(String extensionName) {
    for (ExternalExtension extension : extensions.values()) {
        if (extension.getName().equals(extensionName))
            return true;
    }
    return false;
}
