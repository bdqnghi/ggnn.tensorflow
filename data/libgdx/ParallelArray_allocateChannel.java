@SuppressWarnings({ "unchecked", "rawtypes" })
private <T extends Channel> T allocateChannel(ChannelDescriptor channelDescriptor) {
    if (channelDescriptor.type == float.class) {
        return (T) new FloatChannel(channelDescriptor.id, channelDescriptor.count, capacity);
    } else if (channelDescriptor.type == int.class) {
        return (T) new IntChannel(channelDescriptor.id, channelDescriptor.count, capacity);
    } else {
        return (T) new ObjectChannel(channelDescriptor.id, channelDescriptor.count, capacity, channelDescriptor.type);
    }
}
