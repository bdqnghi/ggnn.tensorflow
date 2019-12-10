/**
 * Adds and returns a channel described by the channel descriptor parameter.
 *  If a channel with the same id already exists, no allocation is performed and that channel is returned.
 *  Otherwise a new channel is allocated and initialized with the initializer.
 */
public <T extends Channel> T addChannel(ChannelDescriptor channelDescriptor, ChannelInitializer<T> initializer) {
    T channel = getChannel(channelDescriptor);
    if (channel == null) {
        channel = allocateChannel(channelDescriptor);
        if (initializer != null)
            initializer.init(channel);
        arrays.add(channel);
    }
    return channel;
}
