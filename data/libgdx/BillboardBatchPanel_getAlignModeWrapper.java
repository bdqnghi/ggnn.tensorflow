private Object getAlignModeWrapper(AlignMode alignMode) {
    for (AlignModeWrapper wrapper : AlignModeWrapper.values()) {
        if (wrapper.mode == alignMode)
            return wrapper;
    }
    return null;
}
