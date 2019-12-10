/**
 * @return the channel with the same id as the one in the descriptor
 */
@SuppressWarnings("unchecked")
public <T extends Channel> T getChannel(ChannelDescriptor descriptor) {
    for (Channel array : arrays) {
        if (array.id == descriptor.id)
            return (T) array;
    }
    return null;
}
